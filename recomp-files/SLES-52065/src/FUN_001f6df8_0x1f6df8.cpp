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

// Function: FUN_001f6df8
// Address: 0x1f6df8 - 0x1f6eb4
void FUN_001f6df8_0x1f6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6df8_0x1f6df8");
#endif

    switch (ctx->pc) {
        case 0x1f6df8u: goto label_1f6df8;
        case 0x1f6dfcu: goto label_1f6dfc;
        case 0x1f6e00u: goto label_1f6e00;
        case 0x1f6e04u: goto label_1f6e04;
        case 0x1f6e08u: goto label_1f6e08;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e10u: goto label_1f6e10;
        case 0x1f6e14u: goto label_1f6e14;
        case 0x1f6e18u: goto label_1f6e18;
        case 0x1f6e1cu: goto label_1f6e1c;
        case 0x1f6e20u: goto label_1f6e20;
        case 0x1f6e24u: goto label_1f6e24;
        case 0x1f6e28u: goto label_1f6e28;
        case 0x1f6e2cu: goto label_1f6e2c;
        case 0x1f6e30u: goto label_1f6e30;
        case 0x1f6e34u: goto label_1f6e34;
        case 0x1f6e38u: goto label_1f6e38;
        case 0x1f6e3cu: goto label_1f6e3c;
        case 0x1f6e40u: goto label_1f6e40;
        case 0x1f6e44u: goto label_1f6e44;
        case 0x1f6e48u: goto label_1f6e48;
        case 0x1f6e4cu: goto label_1f6e4c;
        case 0x1f6e50u: goto label_1f6e50;
        case 0x1f6e54u: goto label_1f6e54;
        case 0x1f6e58u: goto label_1f6e58;
        case 0x1f6e5cu: goto label_1f6e5c;
        case 0x1f6e60u: goto label_1f6e60;
        case 0x1f6e64u: goto label_1f6e64;
        case 0x1f6e68u: goto label_1f6e68;
        case 0x1f6e6cu: goto label_1f6e6c;
        case 0x1f6e70u: goto label_1f6e70;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6e78u: goto label_1f6e78;
        case 0x1f6e7cu: goto label_1f6e7c;
        case 0x1f6e80u: goto label_1f6e80;
        case 0x1f6e84u: goto label_1f6e84;
        case 0x1f6e88u: goto label_1f6e88;
        case 0x1f6e8cu: goto label_1f6e8c;
        case 0x1f6e90u: goto label_1f6e90;
        case 0x1f6e94u: goto label_1f6e94;
        case 0x1f6e98u: goto label_1f6e98;
        case 0x1f6e9cu: goto label_1f6e9c;
        case 0x1f6ea0u: goto label_1f6ea0;
        case 0x1f6ea4u: goto label_1f6ea4;
        case 0x1f6ea8u: goto label_1f6ea8;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6eb0u: goto label_1f6eb0;
        default: break;
    }

    ctx->pc = 0x1f6df8u;

label_1f6df8:
    // 0x1f6df8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1f6dfc:
    // 0x1f6dfc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1f6dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1f6e00:
    // 0x1f6e00: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1f6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1f6e04:
    // 0x1f6e04: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1f6e04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
label_1f6e08:
    // 0x1f6e08: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1f6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1f6e0c:
    // 0x1f6e0c: 0x3c170022  lui         $s7, 0x22
    ctx->pc = 0x1f6e0cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
label_1f6e10:
    // 0x1f6e10: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1f6e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1f6e14:
    // 0x1f6e14: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
label_1f6e18:
    // 0x1f6e18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f6e1c:
    // 0x1f6e1c: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1f6e20:
    // 0x1f6e20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1f6e24:
    // 0x1f6e24: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
label_1f6e28:
    // 0x1f6e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f6e2c:
    // 0x1f6e2c: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f6e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_1f6e30:
    // 0x1f6e30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1f6e34:
    // 0x1f6e34: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
label_1f6e38:
    // 0x1f6e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f6e3c:
    // 0x1f6e3c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
label_1f6e40:
    // 0x1f6e40: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f6e44:
    // 0x1f6e44: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_1f6e48:
    // 0x1f6e48: 0xc07ad98  jal         func_1EB660
label_1f6e4c:
    if (ctx->pc == 0x1F6E4Cu) {
        ctx->pc = 0x1F6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E48u;
        // 0x1f6e4c: 0x8fc4bb20  lw          $a0, -0x44E0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E50u;
        goto label_1f6e50;
    }
    ctx->pc = 0x1F6E48u;
    SET_GPR_U32(ctx, 31, 0x1F6E50u);
    ctx->pc = 0x1F6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E48u;
    // 0x1f6e4c: 0x8fc4bb20  lw          $a0, -0x44E0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F6E48u, 0x1F6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E50u;
label_1f6e50:
    // 0x1f6e50: 0x8e63bb64  lw          $v1, -0x449C($s3)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949732)));
label_1f6e54:
    // 0x1f6e54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6e58:
    // 0x1f6e58: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1f6e5c:
    if (ctx->pc == 0x1F6E5Cu) {
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0x8ea2bb10  lw          $v0, -0x44F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E60u;
        goto label_1f6e60;
    }
    ctx->pc = 0x1F6E58u;
    {
        const bool branch_taken_0x1f6e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0x8ea2bb10  lw          $v0, -0x44F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e58) {
            ctx->pc = 0x1F6E78u;
            goto label_1f6e78;
        }
    }
    ctx->pc = 0x1F6E60u;
label_1f6e60:
    // 0x1f6e60: 0xae40bb34  sw          $zero, -0x44CC($s2)
    ctx->pc = 0x1f6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949684), GPR_U32(ctx, 0));
label_1f6e64:
    // 0x1f6e64: 0xae60bb64  sw          $zero, -0x449C($s3)
    ctx->pc = 0x1f6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949732), GPR_U32(ctx, 0));
label_1f6e68:
    // 0x1f6e68: 0xaee0bb14  sw          $zero, -0x44EC($s7)
    ctx->pc = 0x1f6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294949652), GPR_U32(ctx, 0));
label_1f6e6c:
    // 0x1f6e6c: 0xc07ad18  jal         func_1EB460
label_1f6e70:
    if (ctx->pc == 0x1F6E70u) {
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0xaec0134c  sw          $zero, 0x134C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E74u;
        goto label_1f6e74;
    }
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E74u);
    ctx->pc = 0x1F6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E6Cu;
    // 0x1f6e70: 0xaec0134c  sw          $zero, 0x134C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4940), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB460u, 0x1F6E6Cu, 0x1F6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x8ea2bb10  lw          $v0, -0x44F0($s5)
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949648)));
label_1f6e78:
    // 0x1f6e78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1f6e7c:
    if (ctx->pc == 0x1F6E7Cu) {
        ctx->pc = 0x1F6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E78u;
        // 0x1f6e7c: 0x26844660  addiu       $a0, $s4, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E80u;
        goto label_1f6e80;
    }
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E78u;
        // 0x1f6e7c: 0x26844660  addiu       $a0, $s4, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6E8Cu;
            goto label_1f6e8c;
        }
    }
    ctx->pc = 0x1F6E80u;
label_1f6e80:
    // 0x1f6e80: 0x8e251340  lw          $a1, 0x1340($s1)
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
label_1f6e84:
    // 0x1f6e84: 0xc0400e8  jal         func_1003A0
label_1f6e88:
    if (ctx->pc == 0x1F6E88u) {
        ctx->pc = 0x1F6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E84u;
        // 0x1f6e88: 0x8e06bb68  lw          $a2, -0x4498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E8Cu;
        goto label_1f6e8c;
    }
    ctx->pc = 0x1F6E84u;
    SET_GPR_U32(ctx, 31, 0x1F6E8Cu);
    ctx->pc = 0x1F6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E84u;
    // 0x1f6e88: 0x8e06bb68  lw          $a2, -0x4498($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F6E84u, 0x1F6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E8Cu;
label_1f6e8c:
    // 0x1f6e8c: 0x8e231340  lw          $v1, 0x1340($s1)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
label_1f6e90:
    // 0x1f6e90: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f6e94:
    if (ctx->pc == 0x1F6E94u) {
        ctx->pc = 0x1F6E98u;
        goto label_1f6e98;
    }
    ctx->pc = 0x1F6E90u;
    {
        const bool branch_taken_0x1f6e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e90) {
            ctx->pc = 0x1F6EACu;
            goto label_1f6eac;
        }
    }
    ctx->pc = 0x1F6E98u;
label_1f6e98:
    // 0x1f6e98: 0x8e02bb68  lw          $v0, -0x4498($s0)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
label_1f6e9c:
    // 0x1f6e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f6ea0:
    if (ctx->pc == 0x1F6EA0u) {
        ctx->pc = 0x1F6EA4u;
        goto label_1f6ea4;
    }
    ctx->pc = 0x1F6E9Cu;
    {
        const bool branch_taken_0x1f6e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e9c) {
            ctx->pc = 0x1F6EACu;
            goto label_1f6eac;
        }
    }
    ctx->pc = 0x1F6EA4u;
label_1f6ea4:
    // 0x1f6ea4: 0x60f809  jalr        $v1
label_1f6ea8:
    if (ctx->pc == 0x1F6EA8u) {
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0x8e04bb68  lw          $a0, -0x4498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EACu;
        goto label_1f6eac;
    }
    ctx->pc = 0x1F6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6EACu);
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0x8e04bb68  lw          $a0, -0x4498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EA4u, 0x1F6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6EACu;
label_1f6eac:
    // 0x1f6eac: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_1f6eb0:
    if (ctx->pc == 0x1F6EB0u) {
        ctx->pc = 0x1F6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EACu;
        // 0x1f6eb0: 0xae40bb34  sw          $zero, -0x44CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EB4u;
        goto label_fallthrough_0x1f6eac;
    }
    ctx->pc = 0x1F6EACu;
    {
        const bool branch_taken_0x1f6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EACu;
        // 0x1f6eb0: 0xae40bb34  sw          $zero, -0x44CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eac) {
            ctx->pc = 0x1F6E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6e48;
        }
    }
label_fallthrough_0x1f6eac:
    ctx->pc = 0x1F6EB4u;
}
