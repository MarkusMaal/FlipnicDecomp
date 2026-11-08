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

// Function: entry_0020327c
// Address: 0x20327c - 0x2032d0
void entry_0020327c_0x20327c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020327c_0x20327c");
#endif

    switch (ctx->pc) {
        case 0x2032a0u: goto label_2032a0;
        case 0x2032bcu: goto label_2032bc;
        default: break;
    }

    ctx->pc = 0x20327cu;

    // 0x20327c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x203280: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x203284: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203288: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x203288u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x20328c: 0x5ea00b  movn        $s4, $v0, $fp
    ctx->pc = 0x20328cu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x203290: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x203290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203298: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x203298u;
    SET_GPR_U32(ctx, 31, 0x2032A0u);
    ctx->pc = 0x20329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203298u;
    // 0x20329c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x203298u, 0x2032A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032A0u;
label_2032a0:
    // 0x2032a0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2032a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2032a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2032a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032ac: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x2032acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2032b0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x2032b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x2032b4: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x2032B4u;
    SET_GPR_U32(ctx, 31, 0x2032BCu);
    ctx->pc = 0x2032B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032B4u;
    // 0x2032b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x2032B4u, 0x2032BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032BCu;
label_2032bc:
    // 0x2032bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x2032c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2032c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032c4: 0x24704dd1  addiu       $s0, $v1, 0x4DD1
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19921));
    // 0x2032c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2032C8u;
    {
        const bool branch_taken_0x2032c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032C8u;
        // 0x2032cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c8) {
            ctx->pc = 0x20331Cu;
            return;
        }
    }
    ctx->pc = 0x2032D0u;
}
