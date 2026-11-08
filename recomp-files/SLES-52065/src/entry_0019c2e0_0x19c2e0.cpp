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

// Function: entry_0019c2e0
// Address: 0x19c2e0 - 0x19c328
void entry_0019c2e0_0x19c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c2e0_0x19c2e0");
#endif

    switch (ctx->pc) {
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c320u: goto label_19c320;
        default: break;
    }

    ctx->pc = 0x19c2e0u;

label_19c2e0:
    // 0x19c2e0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19c2e4:
    // 0x19c2e4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19c2e8:
    // 0x19c2e8: 0xc06bd9c  jal         func_1AF670
label_19c2ec:
    if (ctx->pc == 0x19C2ECu) {
        ctx->pc = 0x19C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E8u;
        // 0x19c2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2F0u;
        goto label_19c2f0;
    }
    ctx->pc = 0x19C2E8u;
    SET_GPR_U32(ctx, 31, 0x19C2F0u);
    ctx->pc = 0x19C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2E8u;
    // 0x19c2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x19C2E8u, 0x19C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2F0u;
label_19c2f0:
    // 0x19c2f0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19c2f4:
    // 0x19c2f4: 0xa06028f5  sb          $zero, 0x28F5($v1)
    ctx->pc = 0x19c2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
label_19c2f8:
    // 0x19c2f8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c2fc:
    // 0x19c2fc: 0xa060002d  sb          $zero, 0x2D($v1)
    ctx->pc = 0x19c2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 0));
label_19c300:
    // 0x19c300: 0x8e230bd0  lw          $v1, 0xBD0($s1)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
label_19c304:
    // 0x19c304: 0x12200076  beqz        $s1, . + 4 + (0x76 << 2)
label_19c308:
    if (ctx->pc == 0x19C308u) {
        ctx->pc = 0x19C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C304u;
        // 0x19c308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C30Cu;
        goto label_19c30c;
    }
    ctx->pc = 0x19C304u;
    {
        const bool branch_taken_0x19c304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C304u;
        // 0x19c308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c304) {
            ctx->pc = 0x19C4E0u;
            return;
        }
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19c310:
    // 0x19c310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c314:
    // 0x19c314: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19c314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19c318:
    // 0x19c318: 0x320f809  jalr        $t9
label_19c31c:
    if (ctx->pc == 0x19C31Cu) {
        ctx->pc = 0x19C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C318u;
        // 0x19c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C320u;
        goto label_19c320;
    }
    ctx->pc = 0x19C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C320u);
        ctx->pc = 0x19C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C318u;
        // 0x19c31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C318u, 0x19C320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C320u;
label_19c320:
    // 0x19c320: 0x10000070  b           . + 4 + (0x70 << 2)
label_19c324:
    if (ctx->pc == 0x19C324u) {
        ctx->pc = 0x19C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C320u;
        // 0x19c324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C328u;
        goto label_fallthrough_0x19c320;
    }
    ctx->pc = 0x19C320u;
    {
        const bool branch_taken_0x19c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C320u;
        // 0x19c324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c320) {
            ctx->pc = 0x19C4E4u;
            return;
        }
    }
label_fallthrough_0x19c320:
    ctx->pc = 0x19C328u;
}
