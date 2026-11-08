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

// Function: caseD_5
// Address: 0x18ec0c - 0x18ec60
void caseD_5_0x18ec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x18ec0c");
#endif

    switch (ctx->pc) {
        case 0x18ec14u: goto label_18ec14;
        case 0x18ec28u: goto label_18ec28;
        case 0x18ec54u: goto label_18ec54;
        default: break;
    }

    ctx->pc = 0x18ec0cu;

    // 0x18ec0c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x18EC0Cu;
    SET_GPR_U32(ctx, 31, 0x18EC14u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EC0Cu, 0x18EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC14u;
label_18ec14:
    // 0x18ec14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec18: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18EC18u;
    {
        const bool branch_taken_0x18ec18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC18u;
        // 0x18ec1c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec18) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EC20u;
    // 0x18ec20: 0xc064918  jal         func_192460
    ctx->pc = 0x18EC20u;
    SET_GPR_U32(ctx, 31, 0x18EC28u);
    ctx->pc = 0x18EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC20u;
    // 0x18ec24: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x18EC20u, 0x18EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC28u;
label_18ec28:
    // 0x18ec28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec2c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18EC2Cu;
    {
        const bool branch_taken_0x18ec2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec2c) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EC34u;
    // 0x18ec34: 0x8c850320  lw          $a1, 0x320($a0)
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x18ec38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ec3c: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18EC3Cu;
    {
        const bool branch_taken_0x18ec3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC3Cu;
        // 0x18ec40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec3c) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EC44u;
    // 0x18ec44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ec44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec4c: 0xc064f00  jal         func_193C00
    ctx->pc = 0x18EC4Cu;
    SET_GPR_U32(ctx, 31, 0x18EC54u);
    ctx->pc = 0x18EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC4Cu;
    // 0x18ec50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18EC4Cu, 0x18EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC54u;
label_18ec54:
    // 0x18ec54: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18ec58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18EC58u;
    {
        const bool branch_taken_0x18ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec58) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EC60u;
}
