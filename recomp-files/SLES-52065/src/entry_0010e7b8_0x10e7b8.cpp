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

// Function: entry_0010e7b8
// Address: 0x10e7b8 - 0x10e824
void entry_0010e7b8_0x10e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e7b8_0x10e7b8");
#endif

    switch (ctx->pc) {
        case 0x10e7fcu: goto label_10e7fc;
        case 0x10e814u: goto label_10e814;
        default: break;
    }

    ctx->pc = 0x10e7b8u;

label_10e7b8:
    // 0x10e7b8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x10e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e7bc:
    // 0x10e7bc: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x10e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e7c0:
    // 0x10e7c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10e7c4:
    // 0x10e7c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e7c8:
    // 0x10e7c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10e7cc:
    // 0x10e7cc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e7d0:
    // 0x10e7d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e7d4:
    // 0x10e7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e7d8:
    // 0x10e7d8: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10e7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e7dc:
    // 0x10e7dc: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x10e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10e7e0:
    // 0x10e7e0: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_10e7e4:
    if (ctx->pc == 0x10E7E4u) {
        ctx->pc = 0x10E7E8u;
        goto label_10e7e8;
    }
    ctx->pc = 0x10E7E0u;
    {
        const bool branch_taken_0x10e7e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10e7e0) {
            ctx->pc = 0x10E824u;
            return;
        }
    }
    ctx->pc = 0x10E7E8u;
label_10e7e8:
    // 0x10e7e8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10e7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10e7ec:
    // 0x10e7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e7f0:
    // 0x10e7f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e7f4:
    // 0x10e7f4: 0x320f809  jalr        $t9
label_10e7f8:
    if (ctx->pc == 0x10E7F8u) {
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7FCu;
        goto label_10e7fc;
    }
    ctx->pc = 0x10E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E7FCu);
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7F4u, 0x10E7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E7FCu;
label_10e7fc:
    // 0x10e7fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e800:
    // 0x10e800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e804:
    // 0x10e804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e808:
    // 0x10e808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e80c:
    // 0x10e80c: 0xc042584  jal         func_109610
label_10e810:
    if (ctx->pc == 0x10E810u) {
        ctx->pc = 0x10E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E80Cu;
        // 0x10e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E814u;
        goto label_10e814;
    }
    ctx->pc = 0x10E80Cu;
    SET_GPR_U32(ctx, 31, 0x10E814u);
    ctx->pc = 0x10E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E80Cu;
    // 0x10e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E80Cu, 0x10E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x10e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10e818:
    // 0x10e818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e81c:
    // 0x10e81c: 0x10000005  b           . + 4 + (0x5 << 2)
label_10e820:
    if (ctx->pc == 0x10E820u) {
        ctx->pc = 0x10E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E81Cu;
        // 0x10e820: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E824u;
        goto label_fallthrough_0x10e81c;
    }
    ctx->pc = 0x10E81Cu;
    {
        const bool branch_taken_0x10e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E81Cu;
        // 0x10e820: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e81c) {
            ctx->pc = 0x10E834u;
            return;
        }
    }
label_fallthrough_0x10e81c:
    ctx->pc = 0x10E824u;
}
