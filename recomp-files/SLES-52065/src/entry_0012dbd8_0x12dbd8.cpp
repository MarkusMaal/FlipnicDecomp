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

// Function: entry_0012dbd8
// Address: 0x12dbd8 - 0x12dc08
void entry_0012dbd8_0x12dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dbd8_0x12dbd8");
#endif

    switch (ctx->pc) {
        case 0x12dbf0u: goto label_12dbf0;
        default: break;
    }

    ctx->pc = 0x12dbd8u;

    // 0x12dbd8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12dbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbe0: 0x24a5db00  addiu       $a1, $a1, -0x2500
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
    // 0x12dbe4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12dbe8: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x12DBE8u;
    SET_GPR_U32(ctx, 31, 0x12DBF0u);
    ctx->pc = 0x12DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBE8u;
    // 0x12dbec: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x12DBE8u, 0x12DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBF0u;
label_12dbf0:
    // 0x12dbf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12dbf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12dbf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12dbf8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DBF8u;
    {
        const bool branch_taken_0x12dbf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBF8u;
        // 0x12dbfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbf8) {
            ctx->pc = 0x12DC0Cu;
            return;
        }
    }
    ctx->pc = 0x12DC00u;
    // 0x12dc00: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12DC00u;
    SET_GPR_U32(ctx, 31, 0x12DC08u);
    ctx->pc = 0x12DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC00u;
    // 0x12dc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12DC00u, 0x12DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC08u;
}
