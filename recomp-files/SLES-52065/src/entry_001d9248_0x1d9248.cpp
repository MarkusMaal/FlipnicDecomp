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

// Function: entry_001d9248
// Address: 0x1d9248 - 0x1d92ac
void entry_001d9248_0x1d9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9248_0x1d9248");
#endif

    switch (ctx->pc) {
        case 0x1d9260u: goto label_1d9260;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d9278u: goto label_1d9278;
        default: break;
    }

    ctx->pc = 0x1d9248u;

    // 0x1d9248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d924c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d9250: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1d9250u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1d9254: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x1d9254u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x1d9258: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1D9258u;
    SET_GPR_U32(ctx, 31, 0x1D9260u);
    ctx->pc = 0x1D925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9258u;
    // 0x1d925c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1D9258u, 0x1D9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9260u;
label_1d9260:
    // 0x1d9260: 0xc08218c  jal         func_208630
    ctx->pc = 0x1D9260u;
    SET_GPR_U32(ctx, 31, 0x1D9268u);
    ctx->pc = 0x1D9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9260u;
    // 0x1d9264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1D9260u, 0x1D9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9268u;
label_1d9268:
    // 0x1d9268: 0x340480fc  ori         $a0, $zero, 0x80FC
    ctx->pc = 0x1d9268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33020);
    // 0x1d926c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d926cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d9270: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1D9270u;
    SET_GPR_U32(ctx, 31, 0x1D9278u);
    ctx->pc = 0x1D9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9270u;
    // 0x1d9274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1D9270u, 0x1D9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9278u;
label_1d9278:
    // 0x1d9278: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d9278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d927c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9280: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1d9280u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1d9284: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d9284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d9288: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x1d9288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x1d928c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x1d928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x1d9290: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9290u;
    {
        const bool branch_taken_0x1d9290 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9290u;
        // 0x1d9294: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9290) {
            ctx->pc = 0x1D92ACu;
            return;
        }
    }
    ctx->pc = 0x1D9298u;
    // 0x1d9298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d929c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d92a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a4: 0xc0763ee  jal         func_1D8FB8
    ctx->pc = 0x1D92A4u;
    SET_GPR_U32(ctx, 31, 0x1D92ACu);
    ctx->pc = 0x1D92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92A4u;
    // 0x1d92a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FB8u, 0x1D92A4u, 0x1D92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92ACu;
}
