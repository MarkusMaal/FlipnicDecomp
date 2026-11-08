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

// Function: FUN_001f7a90
// Address: 0x1f7a90 - 0x1f7d70
void FUN_001f7a90_0x1f7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7a90_0x1f7a90");
#endif

    switch (ctx->pc) {
        case 0x1f7ac8u: goto label_1f7ac8;
        case 0x1f7adcu: goto label_1f7adc;
        case 0x1f7ae4u: goto label_1f7ae4;
        case 0x1f7b58u: goto label_1f7b58;
        case 0x1f7b6cu: goto label_1f7b6c;
        case 0x1f7b8cu: goto label_1f7b8c;
        case 0x1f7b98u: goto label_1f7b98;
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7d00u: goto label_1f7d00;
        case 0x1f7d08u: goto label_1f7d08;
        case 0x1f7d34u: goto label_1f7d34;
        case 0x1f7d3cu: goto label_1f7d3c;
        default: break;
    }

    ctx->pc = 0x1f7a90u;

    // 0x1f7a90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f7a94: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f7a98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f7a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a9c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f7a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f7aa0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1f7aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1f7aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7aa8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f7aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f7aac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f7aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f7ab0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f7ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f7ab4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f7ab8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f7abc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f7abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f7ac0: 0xc07de2c  jal         func_1F78B0
    ctx->pc = 0x1F7AC0u;
    SET_GPR_U32(ctx, 31, 0x1F7AC8u);
    ctx->pc = 0x1F7AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AC0u;
    // 0x1f7ac4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F78B0u, 0x1F7AC0u, 0x1F7AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AC8u;
label_1f7ac8:
    // 0x1f7ac8: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1F7AC8u;
    {
        const bool branch_taken_0x1f7ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AC8u;
        // 0x1f7acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ac8) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7AD0u;
    // 0x1f7ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ad4: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F7AD4u;
    SET_GPR_U32(ctx, 31, 0x1F7ADCu);
    ctx->pc = 0x1F7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AD4u;
    // 0x1f7ad8: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F7AD4u, 0x1F7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7ADCu;
label_1f7adc:
    // 0x1f7adc: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1F7ADCu;
    SET_GPR_U32(ctx, 31, 0x1F7AE4u);
    ctx->pc = 0x1F7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7ADCu;
    // 0x1f7ae0: 0x3c140022  lui         $s4, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1F7ADCu, 0x1F7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AE4u;
label_1f7ae4:
    // 0x1f7ae4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f7ae8: 0x8ea5bb54  lw          $a1, -0x44AC($s5)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949716)));
    // 0x1f7aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7af0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7af4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1f7af8: 0xac83bb24  sw          $v1, -0x44DC($a0)
    ctx->pc = 0x1f7af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x21BB24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB24u, _value); } while (0);
    // 0x1f7afc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f7b00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b04: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f7b04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b08: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1f7b08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b0c: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1f7b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b10: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b18: 0x3c0a0022  lui         $t2, 0x22
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b1c: 0xacc21350  sw          $v0, 0x1350($a2)
    ctx->pc = 0x1f7b1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x391350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x391350u, _value); } while (0);
    // 0x1f7b20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f7b24: 0xac64bb40  sw          $a0, -0x44C0($v1)
    ctx->pc = 0x1f7b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB40u, _value); } while (0);
    // 0x1f7b28: 0xace4bb44  sw          $a0, -0x44BC($a3)
    ctx->pc = 0x1f7b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB44u, _value); } while (0);
    // 0x1f7b2c: 0x24511568  addiu       $s1, $v0, 0x1568
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5480));
    // 0x1f7b30: 0xad04bb3c  sw          $a0, -0x44C4($t0)
    ctx->pc = 0x1f7b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB3Cu, _value); } while (0);
    // 0x1f7b34: 0x261215c0  addiu       $s2, $s0, 0x15C0
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5568));
    // 0x1f7b38: 0xad24bb4c  sw          $a0, -0x44B4($t1)
    ctx->pc = 0x1f7b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB4Cu, _value); } while (0);
    // 0x1f7b3c: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b40: 0xad64bb48  sw          $a0, -0x44B8($t3)
    ctx->pc = 0x1f7b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB48u, _value); } while (0);
    // 0x1f7b44: 0x3c170022  lui         $s7, 0x22
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b48: 0xad40bb38  sw          $zero, -0x44C8($t2)
    ctx->pc = 0x1f7b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB38u, _value); } while (0);
    // 0x1f7b4c: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1f7b4cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1f7b50: 0xaea5bb54  sw          $a1, -0x44AC($s5)
    ctx->pc = 0x1f7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294949716), GPR_U32(ctx, 5));
    // 0x1f7b54: 0xae84bb50  sw          $a0, -0x44B0($s4)
    ctx->pc = 0x1f7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949712), GPR_U32(ctx, 4));
label_1f7b58:
    // 0x1f7b58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b60: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x1f7b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x1f7b64: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7B64u;
    SET_GPR_U32(ctx, 31, 0x1F7B6Cu);
    ctx->pc = 0x1F7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B64u;
    // 0x1f7b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7B64u, 0x1F7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B6Cu;
label_1f7b6c:
    // 0x1f7b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b70: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7B70u;
    {
        const bool branch_taken_0x1f7b70 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f7b70) {
            ctx->pc = 0x1F7B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B70u;
            // 0x1f7b74: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7BBCu;
            goto label_1f7bbc;
        }
    }
    ctx->pc = 0x1F7B78u;
    // 0x1f7b78: 0x8ee2bb10  lw          $v0, -0x44F0($s7)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949648)));
    // 0x1f7b7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7B7Cu;
    {
        const bool branch_taken_0x1f7b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B7Cu;
        // 0x1f7b80: 0x8ea6bb54  lw          $a2, -0x44AC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b7c) {
            ctx->pc = 0x1F7B8Cu;
            goto label_1f7b8c;
        }
    }
    ctx->pc = 0x1F7B84u;
    // 0x1f7b84: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7B84u;
    SET_GPR_U32(ctx, 31, 0x1F7B8Cu);
    ctx->pc = 0x1F7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B84u;
    // 0x1f7b88: 0x26c44798  addiu       $a0, $s6, 0x4798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 18328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7B84u, 0x1F7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B8Cu;
label_1f7b8c:
    // 0x1f7b8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f7b90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b94: 0x0  nop
    ctx->pc = 0x1f7b94u;
    // NOP
label_1f7b98:
    // 0x1f7b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7b9c: 0x0  nop
    ctx->pc = 0x1f7b9cu;
    // NOP
    // 0x1f7ba0: 0x0  nop
    ctx->pc = 0x1f7ba0u;
    // NOP
    // 0x1f7ba4: 0x0  nop
    ctx->pc = 0x1f7ba4u;
    // NOP
    // 0x1f7ba8: 0x0  nop
    ctx->pc = 0x1f7ba8u;
    // NOP
    // 0x1f7bac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7BACu;
    {
        const bool branch_taken_0x1f7bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7bac) {
            ctx->pc = 0x1F7B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b98;
        }
    }
    ctx->pc = 0x1F7BB4u;
    // 0x1f7bb4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7BB4u;
    {
        const bool branch_taken_0x1f7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7bb4) {
            ctx->pc = 0x1F7B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b58;
        }
    }
    ctx->pc = 0x1F7BBCu;
label_1f7bbc:
    // 0x1f7bbc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7BBCu;
    {
        const bool branch_taken_0x1f7bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BBCu;
        // 0x1f7bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bbc) {
            ctx->pc = 0x1F7C14u;
            goto label_1f7c14;
        }
    }
    ctx->pc = 0x1F7BC4u;
    // 0x1f7bc4: 0xae1315c0  sw          $s3, 0x15C0($s0)
    ctx->pc = 0x1f7bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 19));
    // 0x1f7bc8: 0xae80bb50  sw          $zero, -0x44B0($s4)
    ctx->pc = 0x1f7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949712), GPR_U32(ctx, 0));
    // 0x1f7bcc: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7BCCu;
    SET_GPR_U32(ctx, 31, 0x1F7BD4u);
    ctx->pc = 0x1F7BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BCCu;
    // 0x1f7bd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7BCCu, 0x1F7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BD4u;
label_1f7bd4:
    // 0x1f7bd4: 0x27d0cd00  addiu       $s0, $fp, -0x3300
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954240));
    // 0x1f7bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bdc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f7bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bec: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7bf0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f7bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bf4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f7bf8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7BF8u;
    SET_GPR_U32(ctx, 31, 0x1F7C00u);
    ctx->pc = 0x1F7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BF8u;
    // 0x1f7bfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7BF8u, 0x1F7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C00u;
label_1f7c00:
    // 0x1f7c00: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7C00u;
    {
        const bool branch_taken_0x1f7c00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C00u;
        // 0x1f7c04: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c00) {
            ctx->pc = 0x1F7C44u;
            goto label_1f7c44;
        }
    }
    ctx->pc = 0x1F7C08u;
    // 0x1f7c08: 0xac40bb24  sw          $zero, -0x44DC($v0)
    ctx->pc = 0x1f7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949668), GPR_U32(ctx, 0));
    // 0x1f7c0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1F7C0Cu;
    {
        const bool branch_taken_0x1f7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C0Cu;
        // 0x1f7c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c0c) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7C14u;
label_1f7c14:
    // 0x1f7c14: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f7c18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7c1c: 0x0  nop
    ctx->pc = 0x1f7c1cu;
    // NOP
label_1f7c20:
    // 0x1f7c20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7c24: 0x0  nop
    ctx->pc = 0x1f7c24u;
    // NOP
    // 0x1f7c28: 0x0  nop
    ctx->pc = 0x1f7c28u;
    // NOP
    // 0x1f7c2c: 0x0  nop
    ctx->pc = 0x1f7c2cu;
    // NOP
    // 0x1f7c30: 0x0  nop
    ctx->pc = 0x1f7c30u;
    // NOP
    // 0x1f7c34: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c20;
        }
    }
    ctx->pc = 0x1F7C3Cu;
    // 0x1f7c3c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1F7C3Cu;
    {
        const bool branch_taken_0x1f7c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c3c) {
            ctx->pc = 0x1F7B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b58;
        }
    }
    ctx->pc = 0x1F7C44u;
label_1f7c44:
    // 0x1f7c44: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7c48: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f7c4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f7c50: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1f7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f7c54: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1f7c58: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7c5c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1f7c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1f7c60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1f7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f7c64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7c68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7c6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f7c70: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C70u;
        // 0x1f7c74: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7CCCu;
            goto label_1f7ccc;
        }
    }
    ctx->pc = 0x1F7C78u;
    // 0x1f7c78: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1f7c7c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C7Cu;
    {
        const bool branch_taken_0x1f7c7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C7Cu;
        // 0x1f7c80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c7c) {
            ctx->pc = 0x1F7C90u;
            goto label_1f7c90;
        }
    }
    ctx->pc = 0x1F7C84u;
    // 0x1f7c84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7c88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7C88u;
    {
        const bool branch_taken_0x1f7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0xac50bb10  sw          $s0, -0x44F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294949648), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c88) {
            ctx->pc = 0x1F7CCCu;
            goto label_1f7ccc;
        }
    }
    ctx->pc = 0x1F7C90u;
label_1f7c90:
    // 0x1f7c90: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x1f7c94: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1f7c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f7c98: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1f7c98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1f7c9c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1f7ca0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f7ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7ca4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7CA4u;
    {
        const bool branch_taken_0x1f7ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ca4) {
            ctx->pc = 0x1F7CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7CA4u;
            // 0x1f7ca8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7CCCu;
            goto label_1f7ccc;
        }
    }
    ctx->pc = 0x1F7CACu;
    // 0x1f7cac: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1f7cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f7cb0: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1f7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x1f7cb4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1f7cb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f7cb8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1f7cbc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f7cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7CC0u;
    {
        const bool branch_taken_0x1f7cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC0u;
        // 0x1f7cc4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cc0) {
            ctx->pc = 0x1F7CD0u;
            goto label_1f7cd0;
        }
    }
    ctx->pc = 0x1F7CC8u;
    // 0x1f7cc8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7ccc:
    // 0x1f7ccc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1f7cd0:
    // 0x1f7cd0: 0xac80bb24  sw          $zero, -0x44DC($a0)
    ctx->pc = 0x1f7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949668), GPR_U32(ctx, 0));
    // 0x1f7cd4: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7CD4u;
    {
        const bool branch_taken_0x1f7cd4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1F7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CD4u;
        // 0x1f7cd8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cd4) {
            ctx->pc = 0x1F7D2Cu;
            goto label_1f7d2c;
        }
    }
    ctx->pc = 0x1F7CDCu;
    // 0x1f7cdc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7CDCu;
    {
        const bool branch_taken_0x1f7cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CDCu;
        // 0x1f7ce0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cdc) {
            ctx->pc = 0x1F7D2Cu;
            goto label_1f7d2c;
        }
    }
    ctx->pc = 0x1F7CE4u;
    // 0x1f7ce4: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F7CE4u;
    {
        const bool branch_taken_0x1f7ce4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CE4u;
        // 0x1f7ce8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ce4) {
            ctx->pc = 0x1F7D2Cu;
            goto label_1f7d2c;
        }
    }
    ctx->pc = 0x1F7CECu;
    // 0x1f7cec: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949648)));
    // 0x1f7cf0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7CF0u;
    {
        const bool branch_taken_0x1f7cf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF0u;
        // 0x1f7cf4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf0) {
            ctx->pc = 0x1F7D00u;
            goto label_1f7d00;
        }
    }
    ctx->pc = 0x1F7CF8u;
    // 0x1f7cf8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7CF8u;
    SET_GPR_U32(ctx, 31, 0x1F7D00u);
    ctx->pc = 0x1F7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CF8u;
    // 0x1f7cfc: 0x248447b8  addiu       $a0, $a0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7CF8u, 0x1F7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D00u;
label_1f7d00:
    // 0x1f7d00: 0xc07dc40  jal         func_1F7100
    ctx->pc = 0x1F7D00u;
    SET_GPR_U32(ctx, 31, 0x1F7D08u);
    ctx->pc = 0x1F7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7100u, 0x1F7D00u, 0x1F7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7d0c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d10: 0xac44bb28  sw          $a0, -0x44D8($v0)
    ctx->pc = 0x1f7d10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB28u, _value); } while (0);
    // 0x1f7d14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d18: 0xac64bb2c  sw          $a0, -0x44D4($v1)
    ctx->pc = 0x1f7d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB2Cu, _value); } while (0);
    // 0x1f7d1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7d20: 0xac44bb20  sw          $a0, -0x44E0($v0)
    ctx->pc = 0x1f7d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x21BB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB20u, _value); } while (0);
    // 0x1f7d24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7D24u;
    {
        const bool branch_taken_0x1f7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D24u;
        // 0x1f7d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d24) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7D2Cu;
label_1f7d2c:
    // 0x1f7d2c: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D34u);
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7D2Cu, 0x1F7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D34u;
label_1f7d34:
    // 0x1f7d34: 0xc07dc96  jal         func_1F7258
    ctx->pc = 0x1F7D34u;
    SET_GPR_U32(ctx, 31, 0x1F7D3Cu);
    ctx->pc = 0x1F7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7258u, 0x1F7D34u, 0x1F7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D3Cu;
label_1f7d3c:
    // 0x1f7d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d40:
    // 0x1f7d40: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f7d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f7d44: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1f7d44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f7d48: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f7d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7d4c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7d50: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7d54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f7d54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7d58: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f7d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7d5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f7d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f7d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D68u;
        // 0x1f7d6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D70u;
}
