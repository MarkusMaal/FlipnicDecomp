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

// Function: FUN_00148e10
// Address: 0x148e10 - 0x148fb4
void FUN_00148e10_0x148e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148e10_0x148e10");
#endif

    switch (ctx->pc) {
        case 0x148e4cu: goto label_148e4c;
        case 0x148e5cu: goto label_148e5c;
        case 0x148e6cu: goto label_148e6c;
        case 0x148ea0u: goto label_148ea0;
        case 0x148ec4u: goto label_148ec4;
        case 0x148f4cu: goto label_148f4c;
        case 0x148f58u: goto label_148f58;
        case 0x148f68u: goto label_148f68;
        case 0x148f70u: goto label_148f70;
        default: break;
    }

    ctx->pc = 0x148e10u;

    // 0x148e10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x148e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x148e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x148e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148e28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148e2c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x148E2Cu;
    {
        const bool branch_taken_0x148e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E2Cu;
        // 0x148e30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e2c) {
            ctx->pc = 0x148F98u;
            goto label_148f98;
        }
    }
    ctx->pc = 0x148E34u;
    // 0x148e34: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x148e38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x148e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x148e3c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x148e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x148e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e44: 0xc052340  jal         func_148D00
    ctx->pc = 0x148E44u;
    SET_GPR_U32(ctx, 31, 0x148E4Cu);
    ctx->pc = 0x148E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E44u;
    // 0x148e48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x148E44u, 0x148E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E4Cu;
label_148e4c:
    // 0x148e4c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x148e50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x148e54: 0xc052340  jal         func_148D00
    ctx->pc = 0x148E54u;
    SET_GPR_U32(ctx, 31, 0x148E5Cu);
    ctx->pc = 0x148E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E54u;
    // 0x148e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x148E54u, 0x148E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E5Cu;
label_148e5c:
    // 0x148e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x148e64: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x148E64u;
    SET_GPR_U32(ctx, 31, 0x148E6Cu);
    ctx->pc = 0x148E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E64u;
    // 0x148e68: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x148E64u, 0x148E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E6Cu;
label_148e6c:
    // 0x148e6c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x148e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x148e70: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x148e74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x148e78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x148e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x148e7c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x148e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x148e80: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x148E80u;
    {
        const bool branch_taken_0x148e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e80) {
            ctx->pc = 0x148EA8u;
            goto label_148ea8;
        }
    }
    ctx->pc = 0x148E88u;
    // 0x148e88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148e8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x148e90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x148e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x148e94: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x148e98: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x148E98u;
    SET_GPR_U32(ctx, 31, 0x148EA0u);
    ctx->pc = 0x148E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E98u;
    // 0x148e9c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x148E98u, 0x148EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EA0u;
label_148ea0:
    // 0x148ea0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148EA0u;
    {
        const bool branch_taken_0x148ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EA0u;
        // 0x148ea4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ea0) {
            ctx->pc = 0x148EC8u;
            goto label_148ec8;
        }
    }
    ctx->pc = 0x148EA8u;
label_148ea8:
    // 0x148ea8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x148ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148eac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x148eb0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x148eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x148eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148eb8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x148eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x148ebc: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x148EBCu;
    SET_GPR_U32(ctx, 31, 0x148EC4u);
    ctx->pc = 0x148EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EBCu;
    // 0x148ec0: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x148EBCu, 0x148EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EC4u;
label_148ec4:
    // 0x148ec4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x148ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_148ec8:
    // 0x148ec8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x148ecc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x148eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x148ed0: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x148ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x148ed4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x148ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x148ed8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148edc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x148edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x148ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148ee4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148ee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x148ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x148eec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148ef0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148ef8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x148ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x148efc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148EFCu;
    {
        const bool branch_taken_0x148efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EFCu;
        // 0x148f00: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148efc) {
            ctx->pc = 0x148F1Cu;
            goto label_148f1c;
        }
    }
    ctx->pc = 0x148F04u;
    // 0x148f04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x148f08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148f0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x148f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148f18: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x148f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_148f1c:
    // 0x148f1c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x148f20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x148f24: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x148f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x148f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f2c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x148f30: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x148f30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x148f34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x148f38: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x148f3c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x148f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x148f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f44: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x148F44u;
    SET_GPR_U32(ctx, 31, 0x148F4Cu);
    ctx->pc = 0x148F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F44u;
    // 0x148f48: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x148F44u, 0x148F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F4Cu;
label_148f4c:
    // 0x148f4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x148f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x148f50: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x148F50u;
    SET_GPR_U32(ctx, 31, 0x148F58u);
    ctx->pc = 0x148F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F50u;
    // 0x148f54: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x148F50u, 0x148F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F58u;
label_148f58:
    // 0x148f58: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x148f58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x148f5c: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x148f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x148f60: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x148F60u;
    {
        const bool branch_taken_0x148f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x148F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F60u;
        // 0x148f64: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f60) {
            ctx->pc = 0x148F98u;
            goto label_148f98;
        }
    }
    ctx->pc = 0x148F68u;
label_148f68:
    // 0x148f68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x148F68u;
    SET_GPR_U32(ctx, 31, 0x148F70u);
    ctx->pc = 0x148F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F68u;
    // 0x148f6c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x148F68u, 0x148F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F70u;
label_148f70:
    // 0x148f70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148f74: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x148f78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x148f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x148f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148f84: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x148F84u;
    {
        const bool branch_taken_0x148f84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x148F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F84u;
        // 0x148f88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f84) {
            ctx->pc = 0x148F90u;
            goto label_148f90;
        }
    }
    ctx->pc = 0x148F8Cu;
    // 0x148f8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x148f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148f90:
    // 0x148f90: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x148F90u;
    {
        const bool branch_taken_0x148f90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x148f90) {
            ctx->pc = 0x148F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148f68;
        }
    }
    ctx->pc = 0x148F98u;
label_148f98:
    // 0x148f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x148f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148fac: 0x3e00008  jr          $ra
    ctx->pc = 0x148FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FACu;
        // 0x148fb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148FB4u;
}
