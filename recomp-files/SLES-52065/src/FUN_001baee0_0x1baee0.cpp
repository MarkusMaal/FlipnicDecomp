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

// Function: FUN_001baee0
// Address: 0x1baee0 - 0x1bb000
void FUN_001baee0_0x1baee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001baee0_0x1baee0");
#endif

    switch (ctx->pc) {
        case 0x1baf1cu: goto label_1baf1c;
        case 0x1baf24u: goto label_1baf24;
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf3cu: goto label_1baf3c;
        case 0x1baf54u: goto label_1baf54;
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf98u: goto label_1baf98;
        case 0x1bafa4u: goto label_1bafa4;
        case 0x1bafbcu: goto label_1bafbc;
        default: break;
    }

    ctx->pc = 0x1baee0u;

    // 0x1baee0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1baee4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1baee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1baee8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1baee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1baeec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1baeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1baef0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1baef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1baef4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1baef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1baef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1baef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1baefc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1baefcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baf04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1baf0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1baf0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf10: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1baf14: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BAF14u;
    {
        const bool branch_taken_0x1baf14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF14u;
        // 0x1baf18: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf14) {
            ctx->pc = 0x1BAF78u;
            goto label_1baf78;
        }
    }
    ctx->pc = 0x1BAF1Cu;
label_1baf1c:
    // 0x1baf1c: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF24u);
    ctx->pc = 0x1BAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF1Cu;
    // 0x1baf20: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF1Cu, 0x1BAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF24u;
label_1baf24:
    // 0x1baf24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1baf24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf28: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BAF28u;
    SET_GPR_U32(ctx, 31, 0x1BAF30u);
    ctx->pc = 0x1BAF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF28u;
    // 0x1baf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BAF28u, 0x1BAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF30u;
label_1baf30:
    // 0x1baf30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1baf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf34: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF34u;
    SET_GPR_U32(ctx, 31, 0x1BAF3Cu);
    ctx->pc = 0x1BAF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF34u;
    // 0x1baf38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF34u, 0x1BAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF3Cu;
label_1baf3c:
    // 0x1baf3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1baf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1baf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf44: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x1baf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x1baf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf4c: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF54u);
    ctx->pc = 0x1BAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF4Cu;
    // 0x1baf50: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BAF4Cu, 0x1BAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF54u;
label_1baf54:
    // 0x1baf54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAF54u;
    {
        const bool branch_taken_0x1baf54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1baf54) {
            ctx->pc = 0x1BAF68u;
            goto label_1baf68;
        }
    }
    ctx->pc = 0x1BAF5Cu;
    // 0x1baf5c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1baf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAF60u;
    {
        const bool branch_taken_0x1baf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF60u;
        // 0x1baf64: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf60) {
            ctx->pc = 0x1BAF70u;
            goto label_1baf70;
        }
    }
    ctx->pc = 0x1BAF68u;
label_1baf68:
    // 0x1baf68: 0x8ed60004  lw          $s6, 0x4($s6)
    ctx->pc = 0x1baf68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1baf6c: 0x0  nop
    ctx->pc = 0x1baf6cu;
    // NOP
label_1baf70:
    // 0x1baf70: 0x16c0ffea  bnez        $s6, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BAF70u;
    {
        const bool branch_taken_0x1baf70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baf70) {
            ctx->pc = 0x1BAF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baf1c;
        }
    }
    ctx->pc = 0x1BAF78u;
label_1baf78:
    // 0x1baf78: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1baf7c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF7Cu;
        // 0x1baf80: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BAFC8u;
            goto label_1bafc8;
        }
    }
    ctx->pc = 0x1BAF84u;
    // 0x1baf84: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF84u;
    SET_GPR_U32(ctx, 31, 0x1BAF8Cu);
    ctx->pc = 0x1BAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF84u;
    // 0x1baf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF84u, 0x1BAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF8Cu;
label_1baf8c:
    // 0x1baf8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1baf8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf90: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BAF90u;
    SET_GPR_U32(ctx, 31, 0x1BAF98u);
    ctx->pc = 0x1BAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF90u;
    // 0x1baf94: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BAF90u, 0x1BAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF98u;
label_1baf98:
    // 0x1baf98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf9c: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BAFA4u);
    ctx->pc = 0x1BAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF9Cu;
    // 0x1bafa0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF9Cu, 0x1BAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFA4u;
label_1bafa4:
    // 0x1bafa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bafa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1bafacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bafb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BAFB4u;
    SET_GPR_U32(ctx, 31, 0x1BAFBCu);
    ctx->pc = 0x1BAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFB4u;
    // 0x1bafb8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BAFB4u, 0x1BAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFBCu;
label_1bafbc:
    // 0x1bafbc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAFBCu;
    {
        const bool branch_taken_0x1bafbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bafbc) {
            ctx->pc = 0x1BAFD4u;
            goto label_1bafd4;
        }
    }
    ctx->pc = 0x1BAFC4u;
    // 0x1bafc4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1bafc8:
    // 0x1bafc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1bafc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAFCCu;
    {
        const bool branch_taken_0x1bafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFCCu;
        // 0x1bafd0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafcc) {
            ctx->pc = 0x1BAFD8u;
            goto label_1bafd8;
        }
    }
    ctx->pc = 0x1BAFD4u;
label_1bafd4:
    // 0x1bafd4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1bafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1bafd8:
    // 0x1bafd8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bafd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bafdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bafdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bafe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bafe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bafe4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bafe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bafe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bafe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bafec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bafecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFF8u;
        // 0x1baffc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB000u;
}
