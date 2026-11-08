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

// Function: entry_00103e74
// Address: 0x103e74 - 0x103eb0
void entry_00103e74_0x103e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e74_0x103e74");
#endif

    switch (ctx->pc) {
        case 0x103e7cu: goto label_103e7c;
        case 0x103e8cu: goto label_103e8c;
        default: break;
    }

    ctx->pc = 0x103e74u;

    // 0x103e74: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103E74u;
    SET_GPR_U32(ctx, 31, 0x103E7Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103E74u, 0x103E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E7Cu;
label_103e7c:
    // 0x103e7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103E7Cu;
    {
        const bool branch_taken_0x103e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E7Cu;
        // 0x103e80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e7c) {
            ctx->pc = 0x103EB0u;
            return;
        }
    }
    ctx->pc = 0x103E84u;
    // 0x103e84: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103E84u;
    SET_GPR_U32(ctx, 31, 0x103E8Cu);
    ctx->pc = 0x103E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E84u;
    // 0x103e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103E84u, 0x103E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E8Cu;
label_103e8c:
    // 0x103e8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103e90: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e94: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103e98: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103e9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ea0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ea4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103ea8: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x103ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x103eac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103eb0u;
}
