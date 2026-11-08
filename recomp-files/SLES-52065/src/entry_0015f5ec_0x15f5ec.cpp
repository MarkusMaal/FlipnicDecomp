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

// Function: entry_0015f5ec
// Address: 0x15f5ec - 0x15f628
void entry_0015f5ec_0x15f5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f5ec_0x15f5ec");
#endif

    ctx->pc = 0x15f5ecu;

label_15f5ec:
    // 0x15f5ec: 0x0  nop
    ctx->pc = 0x15f5ecu;
    // NOP
label_15f5f0:
    // 0x15f5f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f5f4:
    // 0x15f5f4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f5f8:
    // 0x15f5f8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f5fc:
    // 0x15f5fc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f600:
    // 0x15f600: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f604:
    // 0x15f604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f608:
    // 0x15f608: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f60c:
    // 0x15f60c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f610:
    // 0x15f610: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f614:
    // 0x15f614: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f618:
    // 0x15f618: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f61c:
    // 0x15f61c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f620:
    // 0x15f620: 0x320f809  jalr        $t9
label_15f624:
    if (ctx->pc == 0x15F624u) {
        ctx->pc = 0x15F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F620u;
        // 0x15f624: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F628u;
        goto label_fallthrough_0x15f620;
    }
    ctx->pc = 0x15F620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F628u);
        ctx->pc = 0x15F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F620u;
        // 0x15f624: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F620u, 0x15F628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15f620:
    ctx->pc = 0x15F628u;
}
