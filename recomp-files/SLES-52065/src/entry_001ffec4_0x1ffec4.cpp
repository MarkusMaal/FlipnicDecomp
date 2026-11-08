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

// Function: entry_001ffec4
// Address: 0x1ffec4 - 0x1ffed8
void entry_001ffec4_0x1ffec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffec4_0x1ffec4");
#endif

    ctx->pc = 0x1ffec4u;

    // 0x1ffec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFEC4u;
    {
        const bool branch_taken_0x1ffec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEC4u;
        // 0x1ffec8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffec4) {
            ctx->pc = 0x1FFED8u;
            return;
        }
    }
    ctx->pc = 0x1FFECCu;
    // 0x1ffecc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ffeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ffed0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1ffed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1ffed4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ffed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1ffed8u;
}
