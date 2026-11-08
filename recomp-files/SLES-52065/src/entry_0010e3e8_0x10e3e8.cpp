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

// Function: entry_0010e3e8
// Address: 0x10e3e8 - 0x10e424
void entry_0010e3e8_0x10e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e3e8_0x10e3e8");
#endif

    switch (ctx->pc) {
        case 0x10e414u: goto label_10e414;
        default: break;
    }

    ctx->pc = 0x10e3e8u;

label_10e3e8:
    // 0x10e3e8: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10e3ec:
    // 0x10e3ec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e3f0:
    // 0x10e3f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10e3f4:
    // 0x10e3f4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e3f8:
    // 0x10e3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e3fc:
    // 0x10e3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e400:
    // 0x10e400: 0x8c532cd8  lw          $s3, 0x2CD8($v0)
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e404:
    // 0x10e404: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_10e408:
    // 0x10e408: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10e408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10e40c:
    // 0x10e40c: 0x320f809  jalr        $t9
label_10e410:
    if (ctx->pc == 0x10E410u) {
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E414u;
        goto label_10e414;
    }
    ctx->pc = 0x10E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E414u);
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E40Cu, 0x10E414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E414u;
label_10e414:
    // 0x10e414: 0xa66001fa  sh          $zero, 0x1FA($s3)
    ctx->pc = 0x10e414u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 506), (uint16_t)GPR_U32(ctx, 0));
label_10e418:
    // 0x10e418: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_10e41c:
    // 0x10e41c: 0xae6001fc  sw          $zero, 0x1FC($s3)
    ctx->pc = 0x10e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 508), GPR_U32(ctx, 0));
label_10e420:
    // 0x10e420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10e424u;
}
