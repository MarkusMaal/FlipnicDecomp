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

// Function: entry_00147270
// Address: 0x147270 - 0x1472a0
void entry_00147270_0x147270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147270_0x147270");
#endif

    switch (ctx->pc) {
        case 0x14728cu: goto label_14728c;
        default: break;
    }

    ctx->pc = 0x147270u;

label_147270:
    // 0x147270: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147274: 0x2d08821  addu        $s1, $s6, $s0
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x147278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14727c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x14727cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x147280: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x147284: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x147284u;
    SET_GPR_U32(ctx, 31, 0x14728Cu);
    ctx->pc = 0x147288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147284u;
    // 0x147288: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x147284u, 0x14728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14728Cu;
label_14728c:
    // 0x14728c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14728cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147290: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x147290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x147294: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x147294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x147298: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x147298u;
    {
        const bool branch_taken_0x147298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147298u;
        // 0x14729c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147298) {
            ctx->pc = 0x147270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147270;
        }
    }
    ctx->pc = 0x1472A0u;
}
