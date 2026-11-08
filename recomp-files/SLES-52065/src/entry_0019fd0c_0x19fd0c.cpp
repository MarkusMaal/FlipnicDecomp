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

// Function: entry_0019fd0c
// Address: 0x19fd0c - 0x19fd5c
void entry_0019fd0c_0x19fd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd0c_0x19fd0c");
#endif

    switch (ctx->pc) {
        case 0x19fd40u: goto label_19fd40;
        default: break;
    }

    ctx->pc = 0x19fd0cu;

    // 0x19fd0c: 0x0  nop
    ctx->pc = 0x19fd0cu;
    // NOP
    // 0x19fd10: 0x1088001d  beq         $a0, $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19FD10u;
    {
        const bool branch_taken_0x19fd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd10) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD18u;
    // 0x19fd18: 0x90e2282b  lbu         $v0, 0x282B($a3)
    ctx->pc = 0x19fd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10283)));
    // 0x19fd1c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19FD1Cu;
    {
        const bool branch_taken_0x19fd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD1Cu;
        // 0x19fd20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd1c) {
            ctx->pc = 0x19FD8Cu;
            return;
        }
    }
    ctx->pc = 0x19FD24u;
    // 0x19fd24: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19fd28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fd2c: 0x90631684  lbu         $v1, 0x1684($v1)
    ctx->pc = 0x19fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5764)));
    // 0x19fd30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19FD30u;
    {
        const bool branch_taken_0x19fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fd30) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD38u;
    // 0x19fd38: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x19FD38u;
    SET_GPR_U32(ctx, 31, 0x19FD40u);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x19FD38u, 0x19FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD40u;
label_19fd40:
    // 0x19fd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FD40u;
    {
        const bool branch_taken_0x19fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD40u;
        // 0x19fd44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd40) {
            ctx->pc = 0x19FD5Cu;
            return;
        }
    }
    ctx->pc = 0x19FD48u;
    // 0x19fd48: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FD48u;
    {
        const bool branch_taken_0x19fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fd48) {
            ctx->pc = 0x19FD5Cu;
            return;
        }
    }
    ctx->pc = 0x19FD50u;
    // 0x19fd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd54: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FD54u;
    {
        const bool branch_taken_0x19fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fd54) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD5Cu;
}
