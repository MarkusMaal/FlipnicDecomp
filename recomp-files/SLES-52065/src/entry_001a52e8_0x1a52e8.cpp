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

// Function: entry_001a52e8
// Address: 0x1a52e8 - 0x1a5328
void entry_001a52e8_0x1a52e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a52e8_0x1a52e8");
#endif

    switch (ctx->pc) {
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a5320u: goto label_1a5320;
        default: break;
    }

    ctx->pc = 0x1a52e8u;

label_1a52e8:
    // 0x1a52e8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a52ec:
    // 0x1a52ec: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a52f0:
    // 0x1a52f0: 0xc06bd9c  jal         func_1AF670
label_1a52f4:
    if (ctx->pc == 0x1A52F4u) {
        ctx->pc = 0x1A52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F0u;
        // 0x1a52f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52F8u;
        goto label_1a52f8;
    }
    ctx->pc = 0x1A52F0u;
    SET_GPR_U32(ctx, 31, 0x1A52F8u);
    ctx->pc = 0x1A52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52F0u;
    // 0x1a52f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A52F0u, 0x1A52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52F8u;
label_1a52f8:
    // 0x1a52f8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a52fc:
    // 0x1a52fc: 0xa06028f5  sb          $zero, 0x28F5($v1)
    ctx->pc = 0x1a52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
label_1a5300:
    // 0x1a5300: 0x8e630a60  lw          $v1, 0xA60($s3)
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a5304:
    // 0x1a5304: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
label_1a5308:
    if (ctx->pc == 0x1A5308u) {
        ctx->pc = 0x1A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5304u;
        // 0x1a5308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A530Cu;
        goto label_1a530c;
    }
    ctx->pc = 0x1A5304u;
    {
        const bool branch_taken_0x1a5304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5304u;
        // 0x1a5308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5304) {
            ctx->pc = 0x1A53E4u;
            return;
        }
    }
    ctx->pc = 0x1A530Cu;
label_1a530c:
    // 0x1a530c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a5310:
    // 0x1a5310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5314:
    // 0x1a5314: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a5318:
    // 0x1a5318: 0x320f809  jalr        $t9
label_1a531c:
    if (ctx->pc == 0x1A531Cu) {
        ctx->pc = 0x1A531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5318u;
        // 0x1a531c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5320u;
        goto label_1a5320;
    }
    ctx->pc = 0x1A5318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5320u);
        ctx->pc = 0x1A531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5318u;
        // 0x1a531c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5318u, 0x1A5320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5320u;
label_1a5320:
    // 0x1a5320: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a5324:
    if (ctx->pc == 0x1A5324u) {
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5328u;
        goto label_fallthrough_0x1a5320;
    }
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A53E8u;
            return;
        }
    }
label_fallthrough_0x1a5320:
    ctx->pc = 0x1A5328u;
}
