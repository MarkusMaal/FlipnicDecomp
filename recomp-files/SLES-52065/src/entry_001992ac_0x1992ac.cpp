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

// Function: entry_001992ac
// Address: 0x1992ac - 0x199334
void entry_001992ac_0x1992ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001992ac_0x1992ac");
#endif

    switch (ctx->pc) {
        case 0x199304u: goto label_199304;
        default: break;
    }

    ctx->pc = 0x1992acu;

    // 0x1992ac: 0x0  nop
    ctx->pc = 0x1992acu;
    // NOP
    // 0x1992b0: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1992b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1992b8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1992B8u;
    {
        const bool branch_taken_0x1992b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1992b8) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x1992C0u;
    // 0x1992c0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1992c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1992c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1992cc: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1992d0: 0x8ca40710  lw          $a0, 0x710($a1)
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1808)));
    // 0x1992d4: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1992D4u;
    {
        const bool branch_taken_0x1992d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992D4u;
        // 0x1992d8: 0x24a60710  addiu       $a2, $a1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992d4) {
            ctx->pc = 0x199340u;
            return;
        }
    }
    ctx->pc = 0x1992DCu;
    // 0x1992dc: 0x8ca30790  lw          $v1, 0x790($a1)
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
    // 0x1992e0: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x1992e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1992e4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1992E4u;
    {
        const bool branch_taken_0x1992e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1992e4) {
            ctx->pc = 0x199340u;
            return;
        }
    }
    ctx->pc = 0x1992ECu;
    // 0x1992ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1992f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1992f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1992f8: 0x8ca50690  lw          $a1, 0x690($a1)
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
    // 0x1992fc: 0xc064c20  jal         func_193080
    ctx->pc = 0x1992FCu;
    SET_GPR_U32(ctx, 31, 0x199304u);
    ctx->pc = 0x199300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992FCu;
    // 0x199300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1992FCu, 0x199304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199304u;
label_199304:
    // 0x199304: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x199308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19930c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x19930cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
    // 0x199310: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
    // 0x199314: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x199314u;
    {
        const bool branch_taken_0x199314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199314) {
            ctx->pc = 0x199340u;
            return;
        }
    }
    ctx->pc = 0x19931Cu;
    // 0x19931c: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x199320: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x199324: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199324u;
    {
        const bool branch_taken_0x199324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x199324) {
            ctx->pc = 0x199334u;
            return;
        }
    }
    ctx->pc = 0x19932Cu;
    // 0x19932c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x19932Cu;
    SET_GPR_U32(ctx, 31, 0x199334u);
    ctx->pc = 0x199330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19932Cu;
    // 0x199330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19932Cu, 0x199334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199334u;
}
