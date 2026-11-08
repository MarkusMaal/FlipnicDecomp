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

// Function: entry_0017a4c8
// Address: 0x17a4c8 - 0x17a4fc
void entry_0017a4c8_0x17a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4c8_0x17a4c8");
#endif

    ctx->pc = 0x17a4c8u;

    // 0x17a4c8: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17a4cc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x17a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17a4d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17a4d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17a4d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17a4dc: 0x8cc92cd8  lw          $t1, 0x2CD8($a2)
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x17a4e0: 0xa123007b  sb          $v1, 0x7B($t1)
    ctx->pc = 0x17a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 123), (uint8_t)GPR_U32(ctx, 3));
    // 0x17a4e4: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x17a4e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17a4e8: 0x8d482cd0  lw          $t0, 0x2CD0($t2)
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11472)));
    // 0x17a4ec: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A4ECu;
    {
        const bool branch_taken_0x17a4ec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4ECu;
        // 0x17a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4ec) {
            ctx->pc = 0x17A4FCu;
            return;
        }
    }
    ctx->pc = 0x17A4F4u;
    // 0x17a4f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A4F4u;
    {
        const bool branch_taken_0x17a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4f4) {
            ctx->pc = 0x17A51Cu;
            return;
        }
    }
    ctx->pc = 0x17A4FCu;
}
