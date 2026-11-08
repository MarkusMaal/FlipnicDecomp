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

// Function: entry_0019994c
// Address: 0x19994c - 0x1999b4
void entry_0019994c_0x19994c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019994c_0x19994c");
#endif

    switch (ctx->pc) {
        case 0x199970u: goto label_199970;
        default: break;
    }

    ctx->pc = 0x19994cu;

label_19994c:
    // 0x19994c: 0x8ea30790  lw          $v1, 0x790($s5)
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_199950:
    // 0x199950: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_199954:
    // 0x199954: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x199954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_199958:
    // 0x199958: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
label_19995c:
    if (ctx->pc == 0x19995Cu) {
        ctx->pc = 0x199960u;
        goto label_199960;
    }
    ctx->pc = 0x199958u;
    {
        const bool branch_taken_0x199958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199958) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199960u;
label_199960:
    // 0x199960: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_199964:
    // 0x199964: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_199968:
    // 0x199968: 0xc057040  jal         func_15C100
label_19996c:
    if (ctx->pc == 0x19996Cu) {
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199968u;
        // 0x19996c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199970u;
        goto label_199970;
    }
    ctx->pc = 0x199968u;
    SET_GPR_U32(ctx, 31, 0x199970u);
    ctx->pc = 0x19996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199968u;
    // 0x19996c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x199968u, 0x199970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199970u;
label_199970:
    // 0x199970: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_199974:
    // 0x199974: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x199974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_199978:
    // 0x199978: 0x8ea30710  lw          $v1, 0x710($s5)
    ctx->pc = 0x199978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1808)));
label_19997c:
    // 0x19997c: 0x26b00710  addiu       $s0, $s5, 0x710
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1808));
label_199980:
    // 0x199980: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_199984:
    // 0x199984: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_199988:
    // 0x199988: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x199988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_19998c:
    // 0x19998c: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x19998cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_199990:
    // 0x199990: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
label_199994:
    if (ctx->pc == 0x199994u) {
        ctx->pc = 0x199994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199990u;
        // 0x199994: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199998u;
        goto label_199998;
    }
    ctx->pc = 0x199990u;
    {
        const bool branch_taken_0x199990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199990u;
        // 0x199994: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199990) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199998u;
label_199998:
    // 0x199998: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_19999c:
    // 0x19999c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1999a0:
    // 0x1999a0: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_1999a4:
    // 0x1999a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1999a8:
    // 0x1999a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1999ac:
    // 0x1999ac: 0x600008  jr          $v1
label_1999b0:
    if (ctx->pc == 0x1999B0u) {
        ctx->pc = 0x1999B4u;
        goto label_fallthrough_0x1999ac;
    }
    ctx->pc = 0x1999ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1999ac:
    ctx->pc = 0x1999B4u;
}
