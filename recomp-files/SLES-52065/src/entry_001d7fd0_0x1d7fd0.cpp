#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001d7fd0
// Address: 0x1d7fd0 - 0x1d7ffc
void entry_001d7fd0_0x1d7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7fd0_0x1d7fd0");
#endif

    ctx->pc = 0x1d7fd0u;

    // 0x1d7fd0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7fd4: 0x2445054c  addiu       $a1, $v0, 0x54C
    ctx->pc = 0x1d7fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1356));
    // 0x1d7fd8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7fdc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1d7fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7fe0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d7fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7fe4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d7fe8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7FE8u;
    {
        const bool branch_taken_0x1d7fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FE8u;
        // 0x1d7fec: 0x3066000f  andi        $a2, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fe8) {
            ctx->pc = 0x1D7FFCu;
            return;
        }
    }
    ctx->pc = 0x1D7FF0u;
    // 0x1d7ff0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d7ff4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1d7ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7ff8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1d7ffcu;
}
