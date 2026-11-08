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

// Function: entry_001f1de8
// Address: 0x1f1de8 - 0x1f1e80
void entry_001f1de8_0x1f1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1de8_0x1f1de8");
#endif

    switch (ctx->pc) {
        case 0x1f1e20u: goto label_1f1e20;
        case 0x1f1e4cu: goto label_1f1e4c;
        default: break;
    }

    ctx->pc = 0x1f1de8u;

    // 0x1f1de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1dec: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1f1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1f1df0: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x1f1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x1f1df4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1df8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1f1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1f1dfc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f1e00: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x1f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x1f1e04: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1f1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1f1e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1e0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1e10: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1f1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1f1e14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1e18: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1E18u;
    SET_GPR_U32(ctx, 31, 0x1F1E20u);
    ctx->pc = 0x1F1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E18u;
    // 0x1f1e1c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1E18u, 0x1F1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E20u;
label_1f1e20:
    // 0x1f1e20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f1e28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1e2c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f1e30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1f1e34: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1f1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1f1e38: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F1E38u;
    {
        const bool branch_taken_0x1f1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E38u;
        // 0x1f1e3c: 0xaeb2e200  sw          $s2, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e38) {
            ctx->pc = 0x1F1ECCu;
            return;
        }
    }
    ctx->pc = 0x1F1E40u;
    // 0x1f1e40: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f1e44: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1E44u;
    SET_GPR_U32(ctx, 31, 0x1F1E4Cu);
    ctx->pc = 0x1F1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E44u;
    // 0x1f1e48: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1E44u, 0x1F1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E4Cu;
label_1f1e4c:
    // 0x1f1e4c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f1e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1f1e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e54: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f1e58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1e5c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1E5Cu;
    {
        const bool branch_taken_0x1f1e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E5Cu;
        // 0x1f1e60: 0x3c160039  lui         $s6, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e5c) {
            ctx->pc = 0x1F1E80u;
            return;
        }
    }
    ctx->pc = 0x1F1E64u;
    // 0x1f1e64: 0x8ea3e200  lw          $v1, -0x1E00($s5)
    ctx->pc = 0x1f1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959616)));
    // 0x1f1e68: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1e6c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1f1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1f1e70: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f1e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1f1e74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1E74u;
    {
        const bool branch_taken_0x1f1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E74u;
        // 0x1f1e78: 0xaea2e200  sw          $v0, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e74) {
            ctx->pc = 0x1F1EBCu;
            return;
        }
    }
    ctx->pc = 0x1F1E7Cu;
    // 0x1f1e7c: 0x0  nop
    ctx->pc = 0x1f1e7cu;
    // NOP
    ctx->pc = 0x1f1e80u;
}
