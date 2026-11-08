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

// Function: entry_00207f80
// Address: 0x207f80 - 0x207fac
void entry_00207f80_0x207f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f80_0x207f80");
#endif

    ctx->pc = 0x207f80u;

label_207f80:
    // 0x207f80: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x207f84: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x207f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x207f88: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x207f88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x207f8c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x207f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x207f90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x207f94: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x207f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x207f98: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x207f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x207f9c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x207F9Cu;
    {
        const bool branch_taken_0x207f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F9Cu;
        // 0x207fa0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f9c) {
            ctx->pc = 0x207F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207f80;
        }
    }
    ctx->pc = 0x207FA4u;
    // 0x207fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FA4u;
        // 0x207fa8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x207FBCu;
            return;
        }
    }
    ctx->pc = 0x207FACu;
}
