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

// Function: entry_0014b63c
// Address: 0x14b63c - 0x14b694
void entry_0014b63c_0x14b63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b63c_0x14b63c");
#endif

    switch (ctx->pc) {
        case 0x14b64cu: goto label_14b64c;
        default: break;
    }

    ctx->pc = 0x14b63cu;

    // 0x14b63c: 0x0  nop
    ctx->pc = 0x14b63cu;
    // NOP
    // 0x14b640: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b644: 0xc052ed8  jal         func_14BB60
    ctx->pc = 0x14B644u;
    SET_GPR_U32(ctx, 31, 0x14B64Cu);
    ctx->pc = 0x14B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B644u;
    // 0x14b648: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB60u, 0x14B644u, 0x14B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B64Cu;
label_14b64c:
    // 0x14b64c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b654: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14b654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14b658: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14b65c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b664: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x14b664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x14b668: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b66c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x14b66cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14b670: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x14B670u;
    {
        const bool branch_taken_0x14b670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b670) {
            ctx->pc = 0x14B6B0u;
            return;
        }
    }
    ctx->pc = 0x14B678u;
    // 0x14b678: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14b67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B67Cu;
    {
        const bool branch_taken_0x14b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b67c) {
            ctx->pc = 0x14B694u;
            return;
        }
    }
    ctx->pc = 0x14B684u;
    // 0x14b684: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14b688: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14b68c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B68Cu;
    {
        const bool branch_taken_0x14b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B68Cu;
        // 0x14b690: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b68c) {
            ctx->pc = 0x14B6B8u;
            return;
        }
    }
    ctx->pc = 0x14B694u;
}
