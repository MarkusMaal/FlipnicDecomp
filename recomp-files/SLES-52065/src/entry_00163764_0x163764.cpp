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

// Function: entry_00163764
// Address: 0x163764 - 0x1637a8
void entry_00163764_0x163764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163764_0x163764");
#endif

    switch (ctx->pc) {
        case 0x16376cu: goto label_16376c;
        default: break;
    }

    ctx->pc = 0x163764u;

    // 0x163764: 0xc058e84  jal         func_163A10
    ctx->pc = 0x163764u;
    SET_GPR_U32(ctx, 31, 0x16376Cu);
    ctx->pc = 0x163768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163764u;
    // 0x163768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A10u, 0x163764u, 0x16376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x163770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163774: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x163778: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x163778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16377c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x16377cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x163780: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x163784: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x163784u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163788: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16378c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16378Cu;
    {
        const bool branch_taken_0x16378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16378Cu;
        // 0x163790: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16378c) {
            ctx->pc = 0x1637A8u;
            return;
        }
    }
    ctx->pc = 0x163794u;
    // 0x163794: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x163798: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x16379c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1637a0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1637a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1637a4: 0x0  nop
    ctx->pc = 0x1637a4u;
    // NOP
    ctx->pc = 0x1637a8u;
}
