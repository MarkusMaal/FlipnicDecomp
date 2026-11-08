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

// Function: entry_0011d918
// Address: 0x11d918 - 0x11d964
void entry_0011d918_0x11d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d918_0x11d918");
#endif

    switch (ctx->pc) {
        case 0x11d924u: goto label_11d924;
        case 0x11d948u: goto label_11d948;
        default: break;
    }

    ctx->pc = 0x11d918u;

label_11d918:
    // 0x11d918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d91c: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11D91Cu;
    SET_GPR_U32(ctx, 31, 0x11D924u);
    ctx->pc = 0x11D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D91Cu;
    // 0x11d920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11D91Cu, 0x11D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D924u;
label_11d924:
    // 0x11d924: 0x0  nop
    ctx->pc = 0x11d924u;
    // NOP
    // 0x11d928: 0x0  nop
    ctx->pc = 0x11d928u;
    // NOP
    // 0x11d92c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D92Cu;
    {
        const bool branch_taken_0x11d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d92c) {
            ctx->pc = 0x11D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d918;
        }
    }
    ctx->pc = 0x11D934u;
    // 0x11d934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d938: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x11d938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d93c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d940: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D940u;
    SET_GPR_U32(ctx, 31, 0x11D948u);
    ctx->pc = 0x11D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D940u;
    // 0x11d944: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D940u, 0x11D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D948u;
label_11d948:
    // 0x11d948: 0x26a307ff  addiu       $v1, $s5, 0x7FF
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2047));
    // 0x11d94c: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d954: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D954u;
    {
        const bool branch_taken_0x11d954 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D954u;
        // 0x11d958: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d954) {
            ctx->pc = 0x11D964u;
            return;
        }
    }
    ctx->pc = 0x11D95Cu;
    // 0x11d95c: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11d960: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x11d964u;
}
