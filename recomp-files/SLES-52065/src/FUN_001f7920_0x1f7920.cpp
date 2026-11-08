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

// Function: FUN_001f7920
// Address: 0x1f7920 - 0x1f7a90
void FUN_001f7920_0x1f7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7920_0x1f7920");
#endif

    switch (ctx->pc) {
        case 0x1f7940u: goto label_1f7940;
        case 0x1f794cu: goto label_1f794c;
        case 0x1f7978u: goto label_1f7978;
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79a4u: goto label_1f79a4;
        case 0x1f79b8u: goto label_1f79b8;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f79e0u: goto label_1f79e0;
        case 0x1f79e8u: goto label_1f79e8;
        case 0x1f7a08u: goto label_1f7a08;
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f7a40u: goto label_1f7a40;
        case 0x1f7a48u: goto label_1f7a48;
        default: break;
    }

    ctx->pc = 0x1f7920u;

    // 0x1f7920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7924: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f7924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f7928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f792c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7934: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f7934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1f7938: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7938u;
    SET_GPR_U32(ctx, 31, 0x1F7940u);
    ctx->pc = 0x1F793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7938u;
    // 0x1f793c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7938u, 0x1F7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7940u;
label_1f7940:
    // 0x1f7940: 0x8e04bb2c  lw          $a0, -0x44D4($s0)
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949676)));
    // 0x1f7944: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F7944u;
    SET_GPR_U32(ctx, 31, 0x1F794Cu);
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F7944u, 0x1F794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F794Cu;
label_1f794c:
    // 0x1f794c: 0x8e03bb2c  lw          $v1, -0x44D4($s0)
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949676)));
    // 0x1f7950: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7950u;
    {
        const bool branch_taken_0x1f7950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7950u;
        // 0x1f7954: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7950) {
            ctx->pc = 0x1F7980u;
            goto label_1f7980;
        }
    }
    ctx->pc = 0x1F7958u;
    // 0x1f7958: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949648)));
    // 0x1f795c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F795Cu;
    {
        const bool branch_taken_0x1f795c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F795Cu;
        // 0x1f7960: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f795c) {
            ctx->pc = 0x1F79B8u;
            goto label_1f79b8;
        }
    }
    ctx->pc = 0x1F7964u;
    // 0x1f7964: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7968: 0x8c46bb18  lw          $a2, -0x44E8($v0)
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949656)));
    // 0x1f796c: 0x24844758  addiu       $a0, $a0, 0x4758
    ctx->pc = 0x1f796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18264));
    // 0x1f7970: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7970u;
    SET_GPR_U32(ctx, 31, 0x1F7978u);
    ctx->pc = 0x1F7974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7970u;
    // 0x1f7974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7970u, 0x1F7978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7978u;
label_1f7978:
    // 0x1f7978: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1F7978u;
    {
        const bool branch_taken_0x1f7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7978u;
        // 0x1f797c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7978) {
            ctx->pc = 0x1F7A78u;
            goto label_1f7a78;
        }
    }
    ctx->pc = 0x1F7980u;
label_1f7980:
    // 0x1f7980: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f7984: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7988: 0x8c441350  lw          $a0, 0x1350($v0)
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x391350u));
    // 0x1f798c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f798cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7990: 0xac71bb18  sw          $s1, -0x44E8($v1)
    ctx->pc = 0x1f7990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x21BB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB18u, _value); } while (0);
    // 0x1f7994: 0xc07ad48  jal         func_1EB520
    ctx->pc = 0x1F7994u;
    SET_GPR_U32(ctx, 31, 0x1F799Cu);
    ctx->pc = 0x1F7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7994u;
    // 0x1f7998: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB520u, 0x1F7994u, 0x1F799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F799Cu;
label_1f799c:
    // 0x1f799c: 0xc07de2c  jal         func_1F78B0
    ctx->pc = 0x1F799Cu;
    SET_GPR_U32(ctx, 31, 0x1F79A4u);
    ctx->pc = 0x1F79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F799Cu;
    // 0x1f79a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F78B0u, 0x1F799Cu, 0x1F79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79A4u;
label_1f79a4:
    // 0x1f79a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F79A4u;
    {
        const bool branch_taken_0x1f79a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A4u;
        // 0x1f79a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a4) {
            ctx->pc = 0x1F79C0u;
            goto label_1f79c0;
        }
    }
    ctx->pc = 0x1F79ACu;
    // 0x1f79ac: 0x8e04bb2c  lw          $a0, -0x44D4($s0)
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949676)));
    // 0x1f79b0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F79B0u;
    SET_GPR_U32(ctx, 31, 0x1F79B8u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F79B0u, 0x1F79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79B8u;
label_1f79b8:
    // 0x1f79b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F79B8u;
    {
        const bool branch_taken_0x1f79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B8u;
        // 0x1f79bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79b8) {
            ctx->pc = 0x1F7A78u;
            goto label_1f7a78;
        }
    }
    ctx->pc = 0x1F79C0u;
label_1f79c0:
    // 0x1f79c0: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F79C0u;
    SET_GPR_U32(ctx, 31, 0x1F79C8u);
    ctx->pc = 0x1F79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F79C0u;
    // 0x1f79c4: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F79C0u, 0x1F79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79C8u;
label_1f79c8:
    // 0x1f79c8: 0x8e42bb4c  lw          $v0, -0x44B4($s2)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949708)));
    // 0x1f79cc: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F79CCu;
    {
        const bool branch_taken_0x1f79cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79CCu;
        // 0x1f79d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79cc) {
            ctx->pc = 0x1F7A78u;
            goto label_1f7a78;
        }
    }
    ctx->pc = 0x1F79D4u;
    // 0x1f79d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F79D4u;
    {
        const bool branch_taken_0x1f79d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79D4u;
        // 0x1f79d8: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79d4) {
            ctx->pc = 0x1F7A04u;
            goto label_1f7a04;
        }
    }
    ctx->pc = 0x1F79DCu;
    // 0x1f79dc: 0x0  nop
    ctx->pc = 0x1f79dcu;
    // NOP
label_1f79e0:
    // 0x1f79e0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f79e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f79e8:
    // 0x1f79e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f79ec: 0x0  nop
    ctx->pc = 0x1f79ecu;
    // NOP
    // 0x1f79f0: 0x0  nop
    ctx->pc = 0x1f79f0u;
    // NOP
    // 0x1f79f4: 0x0  nop
    ctx->pc = 0x1f79f4u;
    // NOP
    // 0x1f79f8: 0x0  nop
    ctx->pc = 0x1f79f8u;
    // NOP
    // 0x1f79fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F79FCu;
    {
        const bool branch_taken_0x1f79fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f79fc) {
            ctx->pc = 0x1F79E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79e8;
        }
    }
    ctx->pc = 0x1F7A04u;
label_1f7a04:
    // 0x1f7a04: 0x2630d680  addiu       $s0, $s1, -0x2980
    ctx->pc = 0x1f7a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_1f7a08:
    // 0x1f7a08: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a10: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1f7a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1f7a14: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7A14u;
    SET_GPR_U32(ctx, 31, 0x1F7A1Cu);
    ctx->pc = 0x1F7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A14u;
    // 0x1f7a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7A14u, 0x1F7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A1Cu;
label_1f7a1c:
    // 0x1f7a1c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7A1Cu;
    {
        const bool branch_taken_0x1f7a1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7a1c) {
            ctx->pc = 0x1F7A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A1Cu;
            // 0x1f7a20: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A6Cu;
            goto label_1f7a6c;
        }
    }
    ctx->pc = 0x1F7A24u;
    // 0x1f7a24: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7a28: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f7a2c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A2Cu;
    {
        const bool branch_taken_0x1f7a2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A2Cu;
        // 0x1f7a30: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a2c) {
            ctx->pc = 0x1F7A44u;
            goto label_1f7a44;
        }
    }
    ctx->pc = 0x1F7A34u;
    // 0x1f7a34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7a38: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7A38u;
    SET_GPR_U32(ctx, 31, 0x1F7A40u);
    ctx->pc = 0x1F7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A38u;
    // 0x1f7a3c: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7A38u, 0x1F7A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A40u;
label_1f7a40:
    // 0x1f7a40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1f7a44:
    // 0x1f7a44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7a48:
    // 0x1f7a48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7a4c: 0x0  nop
    ctx->pc = 0x1f7a4cu;
    // NOP
    // 0x1f7a50: 0x0  nop
    ctx->pc = 0x1f7a50u;
    // NOP
    // 0x1f7a54: 0x0  nop
    ctx->pc = 0x1f7a54u;
    // NOP
    // 0x1f7a58: 0x0  nop
    ctx->pc = 0x1f7a58u;
    // NOP
    // 0x1f7a5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7A5Cu;
    {
        const bool branch_taken_0x1f7a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7a5c) {
            ctx->pc = 0x1F7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7a48;
        }
    }
    ctx->pc = 0x1F7A64u;
    // 0x1f7a64: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7A64u;
    {
        const bool branch_taken_0x1f7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A64u;
        // 0x1f7a68: 0x2630d680  addiu       $s0, $s1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a64) {
            ctx->pc = 0x1F7A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7a08;
        }
    }
    ctx->pc = 0x1F7A6Cu;
label_1f7a6c:
    // 0x1f7a6c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7A6Cu;
    {
        const bool branch_taken_0x1f7a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A6Cu;
        // 0x1f7a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a6c) {
            ctx->pc = 0x1F79E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F7A74u;
    // 0x1f7a74: 0xae40bb4c  sw          $zero, -0x44B4($s2)
    ctx->pc = 0x1f7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949708), GPR_U32(ctx, 0));
label_1f7a78:
    // 0x1f7a78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7a7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7a80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f7a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A88u;
        // 0x1f7a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7A90u;
}
