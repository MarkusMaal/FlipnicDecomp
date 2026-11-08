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

// Function: entry_001edea8
// Address: 0x1edea8 - 0x1edfc0
void entry_001edea8_0x1edea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edea8_0x1edea8");
#endif

    switch (ctx->pc) {
        case 0x1edeb0u: goto label_1edeb0;
        case 0x1edeb8u: goto label_1edeb8;
        case 0x1edec0u: goto label_1edec0;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf4cu: goto label_1edf4c;
        case 0x1edf64u: goto label_1edf64;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf84u: goto label_1edf84;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edfbcu: goto label_1edfbc;
        default: break;
    }

    ctx->pc = 0x1edea8u;

    // 0x1edea8: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EDEA8u;
    SET_GPR_U32(ctx, 31, 0x1EDEB0u);
    ctx->pc = 0x1EDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEA8u;
    // 0x1edeac: 0xac71a3d0  sw          $s1, -0x5C30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943696), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EDEA8u, 0x1EDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEB0u;
label_1edeb0:
    // 0x1edeb0: 0xc07b5e6  jal         func_1ED798
    ctx->pc = 0x1EDEB0u;
    SET_GPR_U32(ctx, 31, 0x1EDEB8u);
    ctx->pc = 0x1ED798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED798u, 0x1EDEB0u, 0x1EDEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEB8u;
label_1edeb8:
    // 0x1edeb8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EDEB8u;
    SET_GPR_U32(ctx, 31, 0x1EDEC0u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EDEB8u, 0x1EDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEC0u;
label_1edec0:
    // 0x1edec0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1edec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1edec4: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1edec4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1edec8: 0x2472c980  addiu       $s2, $v1, -0x3680
    ctx->pc = 0x1edec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953344));
    // 0x1edecc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1edeccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1eded0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1eded0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1eded4: 0x2510e180  addiu       $s0, $t0, -0x1E80
    ctx->pc = 0x1eded4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959488));
    // 0x1eded8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1eded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ededc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1edee0: 0x24c6d180  addiu       $a2, $a2, -0x2E80
    ctx->pc = 0x1edee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955392));
    // 0x1edee4: 0x24e7d980  addiu       $a3, $a3, -0x2680
    ctx->pc = 0x1edee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957440));
    // 0x1edee8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1edee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1edeec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1edeecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1edef0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1edef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38E1A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E1A0u, _value); } while (0);
    // 0x1edef4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1edef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1edef8: 0xad11e180  sw          $s1, -0x1E80($t0)
    ctx->pc = 0x1edef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x38E180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E180u, _value); } while (0);
    // 0x1edefc: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1edefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1edf00: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1edf00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x38E194u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E194u, _value); } while (0);
    // 0x1edf04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edf08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1edf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x38E184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E184u, _value); } while (0);
    // 0x1edf0c: 0x24a5e168  addiu       $a1, $a1, -0x1E98
    ctx->pc = 0x1edf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959464));
    // 0x1edf10: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1edf10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x38E19Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E19Cu, _value); } while (0);
    // 0x1edf14: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1edf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1edf18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1edf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf1c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1edf1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38E188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E188u, _value); } while (0);
    // 0x1edf20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1edf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38E18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E18Cu, _value); } while (0);
    // 0x1edf24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1edf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38E190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E190u, _value); } while (0);
    // 0x1edf28: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1edf28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38E198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38E198u, _value); } while (0);
    // 0x1edf2c: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF34u);
    ctx->pc = 0x1EDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF2Cu;
    // 0x1edf30: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EDF2Cu, 0x1EDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF34u;
label_1edf34:
    // 0x1edf34: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1edf38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edf3c: 0x24a5e4f8  addiu       $a1, $a1, -0x1B08
    ctx->pc = 0x1edf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960376));
    // 0x1edf40: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1edf40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1edf44: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EDF44u;
    SET_GPR_U32(ctx, 31, 0x1EDF4Cu);
    ctx->pc = 0x1EDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF44u;
    // 0x1edf48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EDF44u, 0x1EDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF4Cu;
label_1edf4c:
    // 0x1edf4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1edf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1edf50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edf54: 0x24a5e6e8  addiu       $a1, $a1, -0x1918
    ctx->pc = 0x1edf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960872));
    // 0x1edf58: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1edf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1edf5c: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF64u);
    ctx->pc = 0x1EDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF5Cu;
    // 0x1edf60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EDF5Cu, 0x1EDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF64u;
label_1edf64:
    // 0x1edf64: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1edf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1edf68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edf6c: 0x24a5e280  addiu       $a1, $a1, -0x1D80
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
    // 0x1edf70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1edf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf74: 0xc07b6a0  jal         func_1EDA80
    ctx->pc = 0x1EDF74u;
    SET_GPR_U32(ctx, 31, 0x1EDF7Cu);
    ctx->pc = 0x1EDF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF74u;
    // 0x1edf78: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA80u, 0x1EDF74u, 0x1EDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF7Cu;
label_1edf7c:
    // 0x1edf7c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EDF7Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF84u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EDF7Cu, 0x1EDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF84u;
label_1edf84:
    // 0x1edf84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edf88: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1EDF88u;
    SET_GPR_U32(ctx, 31, 0x1EDF90u);
    ctx->pc = 0x1EDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF88u;
    // 0x1edf8c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1EDF88u, 0x1EDF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF90u;
label_1edf90:
    // 0x1edf90: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EDF90u;
    {
        const bool branch_taken_0x1edf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF90u;
        // 0x1edf94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf90) {
            ctx->pc = 0x1EDFF0u;
            return;
        }
    }
    ctx->pc = 0x1EDF98u;
    // 0x1edf98: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1edf9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1edf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1edfa0: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x1edfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x1edfa4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1edfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1edfa8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1edfac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edfacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1edfb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfb4: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EDFB4u;
    SET_GPR_U32(ctx, 31, 0x1EDFBCu);
    ctx->pc = 0x1EDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFB4u;
    // 0x1edfb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EDFB4u, 0x1EDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFBCu;
label_1edfbc:
    // 0x1edfbc: 0x0  nop
    ctx->pc = 0x1edfbcu;
    // NOP
    ctx->pc = 0x1edfc0u;
}
