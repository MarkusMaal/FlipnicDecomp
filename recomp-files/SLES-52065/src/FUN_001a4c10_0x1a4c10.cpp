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

// Function: FUN_001a4c10
// Address: 0x1a4c10 - 0x1a4e08
void FUN_001a4c10_0x1a4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4c10_0x1a4c10");
#endif

    switch (ctx->pc) {
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4de4u: goto label_1a4de4;
        default: break;
    }

    ctx->pc = 0x1a4c10u;

    // 0x1a4c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4c14: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a4c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4c1c: 0x24a52b58  addiu       $a1, $a1, 0x2B58
    ctx->pc = 0x1a4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11096));
    // 0x1a4c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4c24: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x1a4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a4c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c30: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a4c30u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212B58u));
    // 0x1a4c34: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a4c34u;
    { uint32_t bits = FAST_READ32(0x212B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c38: 0x24040a70  addiu       $a0, $zero, 0xA70
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2672));
    // 0x1a4c3c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a4c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a4c40: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A4C40u;
    SET_GPR_U32(ctx, 31, 0x1A4C48u);
    ctx->pc = 0x1A4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C40u;
    // 0x1a4c44: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A4C40u, 0x1A4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C48u;
label_1a4c48:
    // 0x1a4c48: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A4C48u;
    {
        const bool branch_taken_0x1a4c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C48u;
        // 0x1a4c4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c48) {
            ctx->pc = 0x1A4D34u;
            goto label_1a4d34;
        }
    }
    ctx->pc = 0x1A4C50u;
    // 0x1a4c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c54: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A4C54u;
    SET_GPR_U32(ctx, 31, 0x1A4C5Cu);
    ctx->pc = 0x1A4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C54u;
    // 0x1a4c58: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A4C54u, 0x1A4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C5Cu;
label_1a4c5c:
    // 0x1a4c5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4c60: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a4c64: 0x2463b3f0  addiu       $v1, $v1, -0x4C10
    ctx->pc = 0x1a4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947824));
    // 0x1a4c68: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a4c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a4c6c: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a4c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a4c70: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x1a4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x1a4c74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4c78: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A4C78u;
    SET_GPR_U32(ctx, 31, 0x1A4C80u);
    ctx->pc = 0x1A4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C78u;
    // 0x1a4c7c: 0x244407f0  addiu       $a0, $v0, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A4C78u, 0x1A4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C80u;
label_1a4c80:
    // 0x1a4c80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4c84: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a4c88: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a4c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a4c8c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A4C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4C94u);
    ctx->pc = 0x1A4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C8Cu;
    // 0x1a4c90: 0x24440890  addiu       $a0, $v0, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A4C8Cu, 0x1A4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C94u;
label_1a4c94:
    // 0x1a4c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4c98: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a4c9c: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x1a4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
    // 0x1a4ca0: 0xac430940  sw          $v1, 0x940($v0)
    ctx->pc = 0x1a4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2368), GPR_U32(ctx, 3));
    // 0x1a4ca4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4ca8: 0xac400930  sw          $zero, 0x930($v0)
    ctx->pc = 0x1a4ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2352), GPR_U32(ctx, 0));
    // 0x1a4cac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4cb0: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x1a4cb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a4cb8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1a4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4cbc: 0xc0667ac  jal         func_199EB0
    ctx->pc = 0x1A4CBCu;
    SET_GPR_U32(ctx, 31, 0x1A4CC4u);
    ctx->pc = 0x1A4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CBCu;
    // 0x1a4cc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EB0u, 0x1A4CBCu, 0x1A4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CC4u;
label_1a4cc4:
    // 0x1a4cc4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a4cc8: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x1a4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1a4ccc: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1a4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1a4cd0: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x1a4cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x1a4cd4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a4cd8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4cdc: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1A4CDCu;
    SET_GPR_U32(ctx, 31, 0x1A4CE4u);
    ctx->pc = 0x1A4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CDCu;
    // 0x1a4ce0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1A4CDCu, 0x1A4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CE4u;
label_1a4ce4:
    // 0x1a4ce4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4ce8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4cf0: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1a4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x1a4cf4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4cf8: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1a4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1a4cfc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4d00: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x1a4d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x1a4d04: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1a4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a4d08: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1a4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1a4d0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4d10: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A4D10u;
    SET_GPR_U32(ctx, 31, 0x1A4D18u);
    ctx->pc = 0x1A4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D10u;
    // 0x1a4d14: 0x244407f0  addiu       $a0, $v0, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A4D10u, 0x1A4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D18u;
label_1a4d18:
    // 0x1a4d18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4d1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a4d20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a4d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a4d24: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A4D24u;
    SET_GPR_U32(ctx, 31, 0x1A4D2Cu);
    ctx->pc = 0x1A4D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D24u;
    // 0x1a4d28: 0x244407f0  addiu       $a0, $v0, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A4D24u, 0x1A4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D2Cu;
label_1a4d2c:
    // 0x1a4d2c: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a4d30: 0x0  nop
    ctx->pc = 0x1a4d30u;
    // NOP
label_1a4d34:
    // 0x1a4d34: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A4D34u;
    {
        const bool branch_taken_0x1a4d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d34) {
            ctx->pc = 0x1A4DECu;
            goto label_1a4dec;
        }
    }
    ctx->pc = 0x1A4D3Cu;
    // 0x1a4d3c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a4d44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4d48: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1a4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1a4d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d50: 0x24a5df00  addiu       $a1, $a1, -0x2100
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
    // 0x1a4d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d5c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a4d60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d64: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d68: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4d6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4d70: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4d74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4d7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4d80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a4d84: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4d88: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4d8c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4d90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4d94: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4d98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4d9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4da0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4da4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a4da8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4dac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a4dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4db0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4db4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4db8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4dbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4dc0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a4dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a4dc4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a4dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a4dc8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a4dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a4dcc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A4DCCu;
    SET_GPR_U32(ctx, 31, 0x1A4DD4u);
    ctx->pc = 0x1A4DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DCCu;
    // 0x1a4dd0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A4DCCu, 0x1A4DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ddc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A4DDCu;
    SET_GPR_U32(ctx, 31, 0x1A4DE4u);
    ctx->pc = 0x1A4DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DDCu;
    // 0x1a4de0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A4DDCu, 0x1A4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DE4u;
label_1a4de4:
    // 0x1a4de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE4u;
        // 0x1a4de8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4DF4u;
            goto label_1a4df4;
        }
    }
    ctx->pc = 0x1A4DECu;
label_1a4dec:
    // 0x1a4dec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a4decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4df4:
    // 0x1a4df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E00u;
        // 0x1a4e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E08u;
}
