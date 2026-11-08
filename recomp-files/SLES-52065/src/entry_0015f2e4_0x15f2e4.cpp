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

// Function: entry_0015f2e4
// Address: 0x15f2e4 - 0x15f320
void entry_0015f2e4_0x15f2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f2e4_0x15f2e4");
#endif

    ctx->pc = 0x15f2e4u;

label_15f2e4:
    // 0x15f2e4: 0x0  nop
    ctx->pc = 0x15f2e4u;
    // NOP
label_15f2e8:
    // 0x15f2e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f2ec:
    // 0x15f2ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f2f0:
    // 0x15f2f0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f2f4:
    // 0x15f2f4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f2f8:
    // 0x15f2f8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f2fc:
    // 0x15f2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f300:
    // 0x15f300: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f304:
    // 0x15f304: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f308:
    // 0x15f308: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f30c:
    // 0x15f30c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f310:
    // 0x15f310: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f314:
    // 0x15f314: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f318:
    // 0x15f318: 0x320f809  jalr        $t9
label_15f31c:
    if (ctx->pc == 0x15F31Cu) {
        ctx->pc = 0x15F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F318u;
        // 0x15f31c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F320u;
        goto label_fallthrough_0x15f318;
    }
    ctx->pc = 0x15F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F320u);
        ctx->pc = 0x15F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F318u;
        // 0x15f31c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F318u, 0x15F320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15f318:
    ctx->pc = 0x15F320u;
}
