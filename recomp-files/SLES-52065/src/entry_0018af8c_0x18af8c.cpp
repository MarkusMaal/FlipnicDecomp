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

// Function: entry_0018af8c
// Address: 0x18af8c - 0x18aff8
void entry_0018af8c_0x18af8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018af8c_0x18af8c");
#endif

    switch (ctx->pc) {
        case 0x18afa4u: goto label_18afa4;
        case 0x18afd0u: goto label_18afd0;
        case 0x18aff0u: goto label_18aff0;
        default: break;
    }

    ctx->pc = 0x18af8cu;

    // 0x18af8c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x18af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x18af90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18af90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af94: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18af98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af9c: 0xc077c22  jal         func_1DF088
    ctx->pc = 0x18AF9Cu;
    SET_GPR_U32(ctx, 31, 0x18AFA4u);
    ctx->pc = 0x18AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF9Cu;
    // 0x18afa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF088u, 0x18AF9Cu, 0x18AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA4u;
label_18afa4:
    // 0x18afa4: 0x14a140  sll         $s4, $s4, 5
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x18afa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afac: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x18afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x18afb0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x18afb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18afb4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18afb8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x18afbc: 0xac822acc  sw          $v0, 0x2ACC($a0)
    ctx->pc = 0x18afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10956), GPR_U32(ctx, 2));
    // 0x18afc0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18afc4: 0x24902acc  addiu       $s0, $a0, 0x2ACC
    ctx->pc = 0x18afc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 10956));
    // 0x18afc8: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AFC8u;
    SET_GPR_U32(ctx, 31, 0x18AFD0u);
    ctx->pc = 0x18AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFC8u;
    // 0x18afcc: 0x24640acc  addiu       $a0, $v1, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AFC8u, 0x18AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFD0u;
label_18afd0:
    // 0x18afd0: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x18afd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18afd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18afdc: 0xac5308cc  sw          $s3, 0x8CC($v0)
    ctx->pc = 0x18afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2252), GPR_U32(ctx, 19));
    // 0x18afe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18afe4: 0x8f8680d8  lw          $a2, -0x7F28($gp)
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x18afe8: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18AFE8u;
    SET_GPR_U32(ctx, 31, 0x18AFF0u);
    ctx->pc = 0x18AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFE8u;
    // 0x18afec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18AFE8u, 0x18AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFF0u;
label_18aff0:
    // 0x18aff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18AFF0u;
    {
        const bool branch_taken_0x18aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFF0u;
        // 0x18aff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aff0) {
            ctx->pc = 0x18B00Cu;
            return;
        }
    }
    ctx->pc = 0x18AFF8u;
}
