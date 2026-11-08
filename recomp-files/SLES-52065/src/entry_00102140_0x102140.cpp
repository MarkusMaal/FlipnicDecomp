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

// Function: entry_00102140
// Address: 0x102140 - 0x102184
void entry_00102140_0x102140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102140_0x102140");
#endif

    switch (ctx->pc) {
        case 0x102148u: goto label_102148;
        case 0x102164u: goto label_102164;
        default: break;
    }

    ctx->pc = 0x102140u;

label_102140:
    // 0x102140: 0xc055ec8  jal         func_157B20
    ctx->pc = 0x102140u;
    SET_GPR_U32(ctx, 31, 0x102148u);
    ctx->pc = 0x102144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102140u;
    // 0x102144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B20u, 0x102140u, 0x102148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102148u;
label_102148:
    // 0x102148: 0x263103d0  addiu       $s1, $s1, 0x3D0
    ctx->pc = 0x102148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x10214c: 0x26022660  addiu       $v0, $s0, 0x2660
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9824));
    // 0x102150: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x102150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102154u;
    {
        const bool branch_taken_0x102154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102154) {
            ctx->pc = 0x102140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102140;
        }
    }
    ctx->pc = 0x10215Cu;
    // 0x10215c: 0xc040a28  jal         func_1028A0
    ctx->pc = 0x10215Cu;
    SET_GPR_U32(ctx, 31, 0x102164u);
    ctx->pc = 0x102160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10215Cu;
    // 0x102160: 0x26042c00  addiu       $a0, $s0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1028A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1028A0u, 0x10215Cu, 0x102164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102164u;
label_102164:
    // 0x102164: 0xae002c1c  sw          $zero, 0x2C1C($s0)
    ctx->pc = 0x102164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11292), GPR_U32(ctx, 0));
    // 0x102168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10216c: 0xae002c20  sw          $zero, 0x2C20($s0)
    ctx->pc = 0x10216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11296), GPR_U32(ctx, 0));
    // 0x102170: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102174: 0xae032c00  sw          $v1, 0x2C00($s0)
    ctx->pc = 0x102174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11264), GPR_U32(ctx, 3));
    // 0x102178: 0xae032c04  sw          $v1, 0x2C04($s0)
    ctx->pc = 0x102178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11268), GPR_U32(ctx, 3));
    // 0x10217c: 0xae032c14  sw          $v1, 0x2C14($s0)
    ctx->pc = 0x10217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11284), GPR_U32(ctx, 3));
    // 0x102180: 0xae022c18  sw          $v0, 0x2C18($s0)
    ctx->pc = 0x102180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11288), GPR_U32(ctx, 2));
    ctx->pc = 0x102184u;
}
