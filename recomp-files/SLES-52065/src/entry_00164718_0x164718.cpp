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

// Function: entry_00164718
// Address: 0x164718 - 0x16475c
void entry_00164718_0x164718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164718_0x164718");
#endif

    switch (ctx->pc) {
        case 0x164720u: goto label_164720;
        default: break;
    }

    ctx->pc = 0x164718u;

    // 0x164718: 0xc058e84  jal         func_163A10
    ctx->pc = 0x164718u;
    SET_GPR_U32(ctx, 31, 0x164720u);
    ctx->pc = 0x16471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164718u;
    // 0x16471c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A10u, 0x164718u, 0x164720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164720u;
label_164720:
    // 0x164720: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x164724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164728: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x16472c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x164730: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x164730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x164734: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164738: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16473c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x16473cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x164740: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164740u;
    {
        const bool branch_taken_0x164740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164740u;
        // 0x164744: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164740) {
            ctx->pc = 0x16475Cu;
            return;
        }
    }
    ctx->pc = 0x164748u;
    // 0x164748: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x164748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16474c: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x16474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x164750: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164754: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x164754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164758: 0x0  nop
    ctx->pc = 0x164758u;
    // NOP
    ctx->pc = 0x16475cu;
}
