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

// Function: entry_0012308c
// Address: 0x12308c - 0x1230a8
void entry_0012308c_0x12308c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012308c_0x12308c");
#endif

    ctx->pc = 0x12308cu;

    // 0x12308c: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123090: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x123090u;
    {
        const bool branch_taken_0x123090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x123094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123090u;
        // 0x123094: 0xa78824  and         $s1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123090) {
            ctx->pc = 0x1230A8u;
            return;
        }
    }
    ctx->pc = 0x123098u;
    // 0x123098: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x123098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12309c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x12309cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1230a0: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x1230a4: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1230a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x1230a8u;
}
