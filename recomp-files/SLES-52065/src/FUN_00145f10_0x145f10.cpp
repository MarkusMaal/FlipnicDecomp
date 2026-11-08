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

// Function: FUN_00145f10
// Address: 0x145f10 - 0x14625c
void FUN_00145f10_0x145f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145f10_0x145f10");
#endif

    switch (ctx->pc) {
        case 0x145f2cu: goto label_145f2c;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f70u: goto label_145f70;
        case 0x145f94u: goto label_145f94;
        case 0x145fa4u: goto label_145fa4;
        case 0x145fe4u: goto label_145fe4;
        case 0x146000u: goto label_146000;
        case 0x146024u: goto label_146024;
        case 0x146038u: goto label_146038;
        case 0x146044u: goto label_146044;
        case 0x146068u: goto label_146068;
        case 0x146078u: goto label_146078;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460acu: goto label_1460ac;
        case 0x1460d8u: goto label_1460d8;
        case 0x146130u: goto label_146130;
        case 0x146144u: goto label_146144;
        case 0x146158u: goto label_146158;
        case 0x14616cu: goto label_14616c;
        case 0x146180u: goto label_146180;
        case 0x1461b8u: goto label_1461b8;
        case 0x1461c0u: goto label_1461c0;
        case 0x1461f8u: goto label_1461f8;
        case 0x14620cu: goto label_14620c;
        case 0x146220u: goto label_146220;
        case 0x146234u: goto label_146234;
        default: break;
    }

    ctx->pc = 0x145f10u;

    // 0x145f10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x145f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145f20: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x145f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x145f24: 0xc04dd0c  jal         func_137430
    ctx->pc = 0x145F24u;
    SET_GPR_U32(ctx, 31, 0x145F2Cu);
    ctx->pc = 0x145F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F24u;
    // 0x145f28: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137430u, 0x145F24u, 0x145F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F2Cu;
label_145f2c:
    // 0x145f2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145f30: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x145f34: 0x246392f0  addiu       $v1, $v1, -0x6D10
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x145f38: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x145f3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x145f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x145f40: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145f44: 0xc052c80  jal         func_14B200
    ctx->pc = 0x145F44u;
    SET_GPR_U32(ctx, 31, 0x145F4Cu);
    ctx->pc = 0x145F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F44u;
    // 0x145f48: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B200u, 0x145F44u, 0x145F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F4Cu;
label_145f4c:
    // 0x145f4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145f50: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x145f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x145f54: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x145f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x145f58: 0x24a56530  addiu       $a1, $a1, 0x6530
    ctx->pc = 0x145f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25904));
    // 0x145f5c: 0x24c664e0  addiu       $a2, $a2, 0x64E0
    ctx->pc = 0x145f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25824));
    // 0x145f60: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x145f64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x145f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145f68: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x145F68u;
    SET_GPR_U32(ctx, 31, 0x145F70u);
    ctx->pc = 0x145F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F68u;
    // 0x145f6c: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x145F68u, 0x145F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F70u;
label_145f70:
    // 0x145f70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145f74: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x145f78: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x145f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x145f7c: 0x24a564b0  addiu       $a1, $a1, 0x64B0
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
    // 0x145f80: 0x24c66460  addiu       $a2, $a2, 0x6460
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25696));
    // 0x145f84: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x145f88: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145f8c: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x145F8Cu;
    SET_GPR_U32(ctx, 31, 0x145F94u);
    ctx->pc = 0x145F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F8Cu;
    // 0x145f90: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x145F8Cu, 0x145F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F94u;
label_145f94:
    // 0x145f94: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145f98: 0x24440200  addiu       $a0, $v0, 0x200
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x145f9c: 0xc051ea8  jal         func_147AA0
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x145FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F9Cu;
    // 0x145fa0: 0xafa4011c  sw          $a0, 0x11C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145fa8: 0xac4002bc  sw          $zero, 0x2BC($v0)
    ctx->pc = 0x145fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 0));
    // 0x145fac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145fb0: 0xac4002c0  sw          $zero, 0x2C0($v0)
    ctx->pc = 0x145fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 0));
    // 0x145fb4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x145fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145fb8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x145fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x145fbc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x145fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145fc0: 0x8c70002c  lw          $s0, 0x2C($v1)
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x145fc4: 0x2e010032  sltiu       $at, $s0, 0x32
    ctx->pc = 0x145fc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x145fc8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x145FC8u;
    {
        const bool branch_taken_0x145fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FC8u;
        // 0x145fcc: 0x2e010033  sltiu       $at, $s0, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fc8) {
            ctx->pc = 0x146008u;
            goto label_146008;
        }
    }
    ctx->pc = 0x145FD0u;
    // 0x145fd0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x145fd4: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x145fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x145fd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145fdc: 0xc052340  jal         func_148D00
    ctx->pc = 0x145FDCu;
    SET_GPR_U32(ctx, 31, 0x145FE4u);
    ctx->pc = 0x145FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FDCu;
    // 0x145fe0: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x145FDCu, 0x145FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FE4u;
label_145fe4:
    // 0x145fe4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x145fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145fe8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x145fec: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x145ff0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x145ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145ff4: 0x278780a4  addiu       $a3, $gp, -0x7F5C
    ctx->pc = 0x145ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934692));
    // 0x145ff8: 0xc052670  jal         func_1499C0
    ctx->pc = 0x145FF8u;
    SET_GPR_U32(ctx, 31, 0x146000u);
    ctx->pc = 0x145FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FF8u;
    // 0x145ffc: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1499C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1499C0u, 0x145FF8u, 0x146000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146000u;
label_146000:
    // 0x146000: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x146000u;
    {
        const bool branch_taken_0x146000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146000u;
        // 0x146004: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146000) {
            ctx->pc = 0x1460ACu;
            goto label_1460ac;
        }
    }
    ctx->pc = 0x146008u;
label_146008:
    // 0x146008: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x146008u;
    {
        const bool branch_taken_0x146008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x146008) {
            ctx->pc = 0x1460A8u;
            goto label_1460a8;
        }
    }
    ctx->pc = 0x146010u;
    // 0x146010: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x146010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x146014: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x146014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x146018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14601c: 0xc052340  jal         func_148D00
    ctx->pc = 0x14601Cu;
    SET_GPR_U32(ctx, 31, 0x146024u);
    ctx->pc = 0x146020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14601Cu;
    // 0x146020: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14601Cu, 0x146024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146024u;
label_146024:
    // 0x146024: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146028: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x146028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14602c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146030: 0xc052340  jal         func_148D00
    ctx->pc = 0x146030u;
    SET_GPR_U32(ctx, 31, 0x146038u);
    ctx->pc = 0x146034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146030u;
    // 0x146034: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x146030u, 0x146038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146038u;
label_146038:
    // 0x146038: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14603c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14603Cu;
    SET_GPR_U32(ctx, 31, 0x146044u);
    ctx->pc = 0x146040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14603Cu;
    // 0x146040: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14603Cu, 0x146044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146044u;
label_146044:
    // 0x146044: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x146044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x146048: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14604c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146050: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x146050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x146054: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x146054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x146058: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x146058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x14605c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x14605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x146060: 0xc051898  jal         func_146260
    ctx->pc = 0x146060u;
    SET_GPR_U32(ctx, 31, 0x146068u);
    ctx->pc = 0x146064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146060u;
    // 0x146064: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x146060u, 0x146068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146068u;
label_146068:
    // 0x146068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14606c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x146070: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x146070u;
    SET_GPR_U32(ctx, 31, 0x146078u);
    ctx->pc = 0x146074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146070u;
    // 0x146074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x146070u, 0x146078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146078u;
label_146078:
    // 0x146078: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14607c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146080: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146084: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x146084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x146088: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x146088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14608c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x14608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x146090: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x146090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x146094: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146098: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x146098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14609c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1460a0: 0xc0523f0  jal         func_148FC0
    ctx->pc = 0x1460A0u;
    SET_GPR_U32(ctx, 31, 0x1460A8u);
    ctx->pc = 0x1460A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460A0u;
    // 0x1460a4: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FC0u, 0x1460A0u, 0x1460A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A8u;
label_1460a8:
    // 0x1460a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1460a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1460ac:
    // 0x1460ac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1460acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1460b0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1460b4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1460b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1460b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1460bc: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1460bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1460c0: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1460c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1460c4: 0x0  nop
    ctx->pc = 0x1460c4u;
    // NOP
    // 0x1460c8: 0x0  nop
    ctx->pc = 0x1460c8u;
    // NOP
    // 0x1460cc: 0x2812  mflo        $a1
    ctx->pc = 0x1460ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1460d0: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1460D0u;
    SET_GPR_U32(ctx, 31, 0x1460D8u);
    ctx->pc = 0x1460D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460D0u;
    // 0x1460d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1460D0u, 0x1460D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460D8u;
label_1460d8:
    // 0x1460d8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1460d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1460dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1460e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1460e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1460e4: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1460e8: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x1460e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x1460ec: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x1460ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1460f0: 0x0  nop
    ctx->pc = 0x1460f0u;
    // NOP
    // 0x1460f4: 0x0  nop
    ctx->pc = 0x1460f4u;
    // NOP
    // 0x1460f8: 0x2010  mfhi        $a0
    ctx->pc = 0x1460f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1460fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x146100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146104: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x146104u;
    {
        const bool branch_taken_0x146104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146104u;
        // 0x146108: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146104) {
            ctx->pc = 0x1460ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1460ac;
        }
    }
    ctx->pc = 0x14610Cu;
    // 0x14610c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146110: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x146110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x146114: 0x34443880  ori         $a0, $v0, 0x3880
    ctx->pc = 0x146114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    // 0x146118: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x146118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x14611c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146120: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x146120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x146124: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146128: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146128u;
    SET_GPR_U32(ctx, 31, 0x146130u);
    ctx->pc = 0x14612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146128u;
    // 0x14612c: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146128u, 0x146130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146130u;
label_146130:
    // 0x146130: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146134: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146138: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x14613c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x14613Cu;
    SET_GPR_U32(ctx, 31, 0x146144u);
    ctx->pc = 0x146140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14613Cu;
    // 0x146140: 0xaca203c4  sw          $v0, 0x3C4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x14613Cu, 0x146144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146144u;
label_146144:
    // 0x146144: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146148: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14614c: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x14614cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146150: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146150u;
    SET_GPR_U32(ctx, 31, 0x146158u);
    ctx->pc = 0x146154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146150u;
    // 0x146154: 0xaca203c8  sw          $v0, 0x3C8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146150u, 0x146158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146158u;
label_146158:
    // 0x146158: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x14615c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146160: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146164: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146164u;
    SET_GPR_U32(ctx, 31, 0x14616Cu);
    ctx->pc = 0x146168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146164u;
    // 0x146168: 0xaca203cc  sw          $v0, 0x3CC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 972), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146164u, 0x14616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14616Cu;
label_14616c:
    // 0x14616c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146170: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146174: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146178: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146178u;
    SET_GPR_U32(ctx, 31, 0x146180u);
    ctx->pc = 0x14617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146178u;
    // 0x14617c: 0xaca203d0  sw          $v0, 0x3D0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146178u, 0x146180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146184: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x146184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x146188: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x14618c: 0x24c60ef0  addiu       $a2, $a2, 0xEF0
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3824));
    // 0x146190: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146194: 0x24840f00  addiu       $a0, $a0, 0xF00
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
    // 0x146198: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x146198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14619c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14619cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1461a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461a4: 0xace202b0  sw          $v0, 0x2B0($a3)
    ctx->pc = 0x1461a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 688), GPR_U32(ctx, 2));
    // 0x1461a8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1461a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210EF0u));
    // 0x1461ac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1461acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1461b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1461b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210F00u));
    // 0x1461b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1461b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1461b8:
    // 0x1461b8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1461B8u, 0x1461C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1461C0u;
    {
        const bool branch_taken_0x1461c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461C0u;
        // 0x1461c4: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461c0) {
            ctx->pc = 0x1461D4u;
            goto label_1461d4;
        }
    }
    ctx->pc = 0x1461C8u;
    // 0x1461c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1461C8u;
    {
        const bool branch_taken_0x1461c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461c8) {
            ctx->pc = 0x1461D4u;
            goto label_1461d4;
        }
    }
    ctx->pc = 0x1461D0u;
    // 0x1461d0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1461d4:
    // 0x1461d4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1461dc: 0x8c4202b0  lw          $v0, 0x2B0($v0)
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x1461e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1461e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1461e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1461e8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461ec: 0x8c4203c4  lw          $v0, 0x3C4($v0)
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x1461f0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1461F0u;
    SET_GPR_U32(ctx, 31, 0x1461F8u);
    ctx->pc = 0x1461F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461F0u;
    // 0x1461f4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1461F0u, 0x1461F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461F8u;
label_1461f8:
    // 0x1461f8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146200: 0x8c4203c8  lw          $v0, 0x3C8($v0)
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x146204: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x146204u;
    SET_GPR_U32(ctx, 31, 0x14620Cu);
    ctx->pc = 0x146208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146204u;
    // 0x146208: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x146204u, 0x14620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14620Cu;
label_14620c:
    // 0x14620c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x14620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146210: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146214: 0x8c4203cc  lw          $v0, 0x3CC($v0)
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x146218: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x146218u;
    SET_GPR_U32(ctx, 31, 0x146220u);
    ctx->pc = 0x14621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146218u;
    // 0x14621c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x146218u, 0x146220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146224: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146228: 0x8c4203d0  lw          $v0, 0x3D0($v0)
    ctx->pc = 0x146228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x14622c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14622Cu;
    SET_GPR_U32(ctx, 31, 0x146234u);
    ctx->pc = 0x146230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14622Cu;
    // 0x146230: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14622Cu, 0x146234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146234u;
label_146234:
    // 0x146234: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x146234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x146238: 0x2e221388  sltiu       $v0, $s1, 0x1388
    ctx->pc = 0x146238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
    // 0x14623c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14623Cu;
    {
        const bool branch_taken_0x14623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14623Cu;
        // 0x146240: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14623c) {
            ctx->pc = 0x1461B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1461b8;
        }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14624c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14624cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146254: 0x3e00008  jr          $ra
    ctx->pc = 0x146254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146254u;
        // 0x146258: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14625Cu;
}
