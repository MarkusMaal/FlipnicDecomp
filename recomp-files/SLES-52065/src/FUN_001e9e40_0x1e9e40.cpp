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

// Function: FUN_001e9e40
// Address: 0x1e9e40 - 0x1e9fb4
void FUN_001e9e40_0x1e9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9e40_0x1e9e40");
#endif

    switch (ctx->pc) {
        case 0x1e9ee0u: goto label_1e9ee0;
        case 0x1e9f20u: goto label_1e9f20;
        case 0x1e9f50u: goto label_1e9f50;
        case 0x1e9f60u: goto label_1e9f60;
        case 0x1e9f78u: goto label_1e9f78;
        default: break;
    }

    ctx->pc = 0x1e9e40u;

    // 0x1e9e40: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x1e9e44: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e9e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e9e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e9e4c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1e9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1e9e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9e54: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1e9e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e9e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9e5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9e64: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1e9e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1e9e68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e9e6c: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e9e70: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x1e9e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1e9e74: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1e9e78: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e9e7c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1e9e80: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e9e84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e9e88: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e9e8c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1e9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x1e9e90: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e9e94: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1e9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1e9e98: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e9ea0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9ea4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1e9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1e9ea8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e9eac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1e9eb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9eb4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e9eb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e9ebc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1e9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1e9ec0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e9ec4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1e9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1e9ec8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e9ecc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1e9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1e9ed0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1e9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e9ed4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e9ed8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1e9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e9edc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1e9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1e9ee0:
    // 0x1e9ee0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1e9ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e9ee4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e9ee8: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1e9ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1e9eec: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1e9eecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1e9ef0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1e9ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e9ef4: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1e9ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1e9ef8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9EF8u;
    {
        const bool branch_taken_0x1e9ef8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EF8u;
        // 0x1e9efc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ef8) {
            ctx->pc = 0x1E9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ee0;
        }
    }
    ctx->pc = 0x1E9F00u;
    // 0x1e9f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9F04u;
    {
        const bool branch_taken_0x1e9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f04) {
            ctx->pc = 0x1E9F18u;
            goto label_1e9f18;
        }
    }
    ctx->pc = 0x1E9F0Cu;
    // 0x1e9f0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e9f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9F10u;
    {
        const bool branch_taken_0x1e9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F10u;
        // 0x1e9f14: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f10) {
            ctx->pc = 0x1E9F1Cu;
            goto label_1e9f1c;
        }
    }
    ctx->pc = 0x1E9F18u;
label_1e9f18:
    // 0x1e9f18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f1c:
    // 0x1e9f1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e9f20:
    // 0x1e9f20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9f24: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1e9f24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e9f28: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9F28u;
    {
        const bool branch_taken_0x1e9f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F28u;
        // 0x1e9f2c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f28) {
            ctx->pc = 0x1E9F48u;
            goto label_1e9f48;
        }
    }
    ctx->pc = 0x1E9F30u;
    // 0x1e9f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9f34: 0x246340c0  addiu       $v1, $v1, 0x40C0
    ctx->pc = 0x1e9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16576));
    // 0x1e9f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f40: 0x400008  jr          $v0
    ctx->pc = 0x1E9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9F48u: goto label_1e9f48;
            case 0x1E9F58u: goto label_1e9f58;
            case 0x1E9F68u: goto label_1e9f68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E9F48u;
label_1e9f48:
    // 0x1e9f48: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9F48u, 0x1E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F50u;
label_1e9f50:
    // 0x1e9f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9F50u;
    {
        const bool branch_taken_0x1e9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f50) {
            ctx->pc = 0x1E9F68u;
            goto label_1e9f68;
        }
    }
    ctx->pc = 0x1E9F58u;
label_1e9f58:
    // 0x1e9f58: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1E9F58u;
    SET_GPR_U32(ctx, 31, 0x1E9F60u);
    ctx->pc = 0x1E9F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F58u;
    // 0x1e9f5c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA830u, 0x1E9F58u, 0x1E9F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F60u;
label_1e9f60:
    // 0x1e9f60: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E9F60u;
    {
        const bool branch_taken_0x1e9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F60u;
        // 0x1e9f64: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f60) {
            ctx->pc = 0x1E9F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9f20;
        }
    }
    ctx->pc = 0x1E9F68u;
label_1e9f68:
    // 0x1e9f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9f6c: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x1e9f70: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9F70u;
    SET_GPR_U32(ctx, 31, 0x1E9F78u);
    ctx->pc = 0x1E9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F70u;
    // 0x1e9f74: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9F70u, 0x1E9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F78u;
label_1e9f78:
    // 0x1e9f78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9f7c: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1e9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x1e9f80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9f84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9f88: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e9f8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f90: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1e9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1e9f94: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1e9f98: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1e9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1e9f9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FACu;
        // 0x1e9fb0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9FB4u;
}
