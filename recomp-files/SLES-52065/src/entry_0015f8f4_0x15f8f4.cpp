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

// Function: entry_0015f8f4
// Address: 0x15f8f4 - 0x15f958
void entry_0015f8f4_0x15f8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f8f4_0x15f8f4");
#endif

    switch (ctx->pc) {
        case 0x15f930u: goto label_15f930;
        default: break;
    }

    ctx->pc = 0x15f8f4u;

label_15f8f4:
    // 0x15f8f4: 0x0  nop
    ctx->pc = 0x15f8f4u;
    // NOP
label_15f8f8:
    // 0x15f8f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f8fc:
    // 0x15f8fc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f900:
    // 0x15f900: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f904:
    // 0x15f904: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f908:
    // 0x15f908: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f90c:
    // 0x15f90c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f910:
    // 0x15f910: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15f914:
    // 0x15f914: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f918:
    // 0x15f918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f91c:
    // 0x15f91c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f920:
    // 0x15f920: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f924:
    // 0x15f924: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f928:
    // 0x15f928: 0x320f809  jalr        $t9
label_15f92c:
    if (ctx->pc == 0x15F92Cu) {
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F930u;
        goto label_15f930;
    }
    ctx->pc = 0x15F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F930u);
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F928u, 0x15F930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F930u;
label_15f930:
    // 0x15f930: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x15f930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f934:
    // 0x15f934: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15f938:
    // 0x15f938: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f93c:
    // 0x15f93c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15f940:
    // 0x15f940: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15f944:
    // 0x15f944: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15f948:
    // 0x15f948: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15f94c:
    // 0x15f94c: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15f94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_15f950:
    // 0x15f950: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_15f954:
    if (ctx->pc == 0x15F954u) {
        ctx->pc = 0x15F958u;
        goto label_fallthrough_0x15f950;
    }
    ctx->pc = 0x15F950u;
    {
        const bool branch_taken_0x15f950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f950) {
            ctx->pc = 0x15F96Cu;
            return;
        }
    }
label_fallthrough_0x15f950:
    ctx->pc = 0x15F958u;
}
