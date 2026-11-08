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

// Function: entry_001efe90
// Address: 0x1efe90 - 0x1eff20
void entry_001efe90_0x1efe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe90_0x1efe90");
#endif

    switch (ctx->pc) {
        case 0x1efec8u: goto label_1efec8;
        case 0x1efef4u: goto label_1efef4;
        default: break;
    }

    ctx->pc = 0x1efe90u;

    // 0x1efe90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efe94: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efe98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efe9c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1efe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1efea0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efea4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1efea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1efea8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efeac: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1efeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1efeb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efeb4: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1efeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1efeb8: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x1efeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x1efebc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efec0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFEC0u;
    SET_GPR_U32(ctx, 31, 0x1EFEC8u);
    ctx->pc = 0x1EFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEC0u;
    // 0x1efec4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFEC0u, 0x1EFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEC8u;
label_1efec8:
    // 0x1efec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efed0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efed4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1efed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1efed8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1efed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1efedc: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1efedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1efee0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EFEE0u;
    {
        const bool branch_taken_0x1efee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEE0u;
        // 0x1efee4: 0xae92e200  sw          $s2, -0x1E00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efee0) {
            ctx->pc = 0x1EFF68u;
            return;
        }
    }
    ctx->pc = 0x1EFEE8u;
    // 0x1efee8: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1efee8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1efeec: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFEECu;
    SET_GPR_U32(ctx, 31, 0x1EFEF4u);
    ctx->pc = 0x1EFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEECu;
    // 0x1efef0: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFEECu, 0x1EFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEF4u;
label_1efef4:
    // 0x1efef4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1efef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efefc: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efefcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1eff00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eff04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFF04u;
    {
        const bool branch_taken_0x1eff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF04u;
        // 0x1eff08: 0x3c1e0039  lui         $fp, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff04) {
            ctx->pc = 0x1EFF20u;
            return;
        }
    }
    ctx->pc = 0x1EFF0Cu;
    // 0x1eff0c: 0x8e83e200  lw          $v1, -0x1E00($s4)
    ctx->pc = 0x1eff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959616)));
    // 0x1eff10: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1eff14: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1eff14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1eff18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EFF18u;
    {
        const bool branch_taken_0x1eff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF18u;
        // 0x1eff1c: 0xae82e200  sw          $v0, -0x1E00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff18) {
            ctx->pc = 0x1EFF58u;
            return;
        }
    }
    ctx->pc = 0x1EFF20u;
}
