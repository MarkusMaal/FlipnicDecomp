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

// Function: entry_0015a164
// Address: 0x15a164 - 0x15a1a0
void entry_0015a164_0x15a164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a164_0x15a164");
#endif

    switch (ctx->pc) {
        case 0x15a16cu: goto label_15a16c;
        case 0x15a180u: goto label_15a180;
        case 0x15a194u: goto label_15a194;
        default: break;
    }

    ctx->pc = 0x15a164u;

    // 0x15a164: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x15A164u;
    SET_GPR_U32(ctx, 31, 0x15A16Cu);
    ctx->pc = 0x15AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC00u, 0x15A164u, 0x15A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A16Cu;
label_15a16c:
    // 0x15a16c: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15a16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15a170: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15A170u;
    {
        const bool branch_taken_0x15a170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A170u;
        // 0x15a174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a170) {
            ctx->pc = 0x15A1A0u;
            return;
        }
    }
    ctx->pc = 0x15A178u;
    // 0x15a178: 0xc055c40  jal         func_157100
    ctx->pc = 0x15A178u;
    SET_GPR_U32(ctx, 31, 0x15A180u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x15A178u, 0x15A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A180u;
label_15a180:
    // 0x15a180: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x15a180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x15a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a18c: 0xc042118  jal         func_108460
    ctx->pc = 0x15A18Cu;
    SET_GPR_U32(ctx, 31, 0x15A194u);
    ctx->pc = 0x15A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A18Cu;
    // 0x15a190: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A18Cu, 0x15A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A194u;
label_15a194:
    // 0x15a194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A198u;
    {
        const bool branch_taken_0x15a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A198u;
        // 0x15a19c: 0xae220210  sw          $v0, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a198) {
            ctx->pc = 0x15A1A4u;
            return;
        }
    }
    ctx->pc = 0x15A1A0u;
}
