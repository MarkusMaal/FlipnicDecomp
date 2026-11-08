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

// Function: entry_001efc50
// Address: 0x1efc50 - 0x1efce8
void entry_001efc50_0x1efc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efc50_0x1efc50");
#endif

    switch (ctx->pc) {
        case 0x1efc88u: goto label_1efc88;
        case 0x1efcb4u: goto label_1efcb4;
        default: break;
    }

    ctx->pc = 0x1efc50u;

    // 0x1efc50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1efc54: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efc58: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1efc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1efc5c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efc60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1efc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1efc64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efc64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efc68: 0xae340014  sw          $s4, 0x14($s1)
    ctx->pc = 0x1efc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
    // 0x1efc6c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1efc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1efc70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efc78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1efc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1efc7c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efc80: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFC80u;
    SET_GPR_U32(ctx, 31, 0x1EFC88u);
    ctx->pc = 0x1EFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC80u;
    // 0x1efc84: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFC80u, 0x1EFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC88u;
label_1efc88:
    // 0x1efc88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efc88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efc90: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efc94: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1efc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1efc98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1efc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1efc9c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1efc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1efca0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EFCA0u;
    {
        const bool branch_taken_0x1efca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCA0u;
        // 0x1efca4: 0xaeb2e200  sw          $s2, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efca0) {
            ctx->pc = 0x1EFD34u;
            return;
        }
    }
    ctx->pc = 0x1EFCA8u;
    // 0x1efca8: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1efcac: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFCACu;
    SET_GPR_U32(ctx, 31, 0x1EFCB4u);
    ctx->pc = 0x1EFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCACu;
    // 0x1efcb0: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFCACu, 0x1EFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCB4u;
label_1efcb4:
    // 0x1efcb4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1efcb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcbc: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1efcc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efcc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFCC4u;
    {
        const bool branch_taken_0x1efcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCC4u;
        // 0x1efcc8: 0x3c160039  lui         $s6, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcc4) {
            ctx->pc = 0x1EFCE8u;
            return;
        }
    }
    ctx->pc = 0x1EFCCCu;
    // 0x1efccc: 0x8ea3e200  lw          $v1, -0x1E00($s5)
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959616)));
    // 0x1efcd0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1efcd4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1efcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1efcd8: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1efcdc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EFCDCu;
    {
        const bool branch_taken_0x1efcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCDCu;
        // 0x1efce0: 0xaea2e200  sw          $v0, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcdc) {
            ctx->pc = 0x1EFD24u;
            return;
        }
    }
    ctx->pc = 0x1EFCE4u;
    // 0x1efce4: 0x0  nop
    ctx->pc = 0x1efce4u;
    // NOP
    ctx->pc = 0x1efce8u;
}
