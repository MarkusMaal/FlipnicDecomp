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

// Function: entry_001fbae4
// Address: 0x1fbae4 - 0x1fbb14
void entry_001fbae4_0x1fbae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbae4_0x1fbae4");
#endif

    switch (ctx->pc) {
        case 0x1fbaecu: goto label_1fbaec;
        default: break;
    }

    ctx->pc = 0x1fbae4u;

    // 0x1fbae4: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FBAE4u;
    SET_GPR_U32(ctx, 31, 0x1FBAECu);
    ctx->pc = 0x1FBAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAE4u;
    // 0x1fbae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FBAE4u, 0x1FBAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAECu;
label_1fbaec:
    // 0x1fbaec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1fbaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fbaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbaf4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBAF4u;
    {
        const bool branch_taken_0x1fbaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAF4u;
        // 0x1fbaf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbaf4) {
            ctx->pc = 0x1FBB38u;
            return;
        }
    }
    ctx->pc = 0x1FBAFCu;
    // 0x1fbafc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBAFCu;
    {
        const bool branch_taken_0x1fbafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAFCu;
        // 0x1fbb00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbafc) {
            ctx->pc = 0x1FBB14u;
            return;
        }
    }
    ctx->pc = 0x1FBB04u;
    // 0x1fbb04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBB04u;
    {
        const bool branch_taken_0x1fbb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB04u;
        // 0x1fbb08: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb04) {
            ctx->pc = 0x1FBB24u;
            return;
        }
    }
    ctx->pc = 0x1FBB0Cu;
    // 0x1fbb0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FBB0Cu;
    {
        const bool branch_taken_0x1fbb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb0c) {
            ctx->pc = 0x1FBB60u;
            return;
        }
    }
    ctx->pc = 0x1FBB14u;
}
