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

// Function: entry_0010e49c
// Address: 0x10e49c - 0x10e4fc
void entry_0010e49c_0x10e49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e49c_0x10e49c");
#endif

    switch (ctx->pc) {
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4ecu: goto label_10e4ec;
        default: break;
    }

    ctx->pc = 0x10e49cu;

label_10e49c:
    // 0x10e49c: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x10e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e4a0:
    // 0x10e4a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10e4a4:
    // 0x10e4a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e4a8:
    // 0x10e4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e4ac:
    // 0x10e4ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e4b0:
    // 0x10e4b0: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10e4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e4b4:
    // 0x10e4b4: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x10e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10e4b8:
    // 0x10e4b8: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_10e4bc:
    if (ctx->pc == 0x10E4BCu) {
        ctx->pc = 0x10E4C0u;
        goto label_10e4c0;
    }
    ctx->pc = 0x10E4B8u;
    {
        const bool branch_taken_0x10e4b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10e4b8) {
            ctx->pc = 0x10E4FCu;
            return;
        }
    }
    ctx->pc = 0x10E4C0u;
label_10e4c0:
    // 0x10e4c0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10e4c4:
    // 0x10e4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e4c8:
    // 0x10e4c8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e4cc:
    // 0x10e4cc: 0x320f809  jalr        $t9
label_10e4d0:
    if (ctx->pc == 0x10E4D0u) {
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4D4u;
        goto label_10e4d4;
    }
    ctx->pc = 0x10E4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E4D4u);
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4CCu, 0x10E4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e4d8:
    // 0x10e4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e4dc:
    // 0x10e4dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e4e0:
    // 0x10e4e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e4e4:
    // 0x10e4e4: 0xc042584  jal         func_109610
label_10e4e8:
    if (ctx->pc == 0x10E4E8u) {
        ctx->pc = 0x10E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E4u;
        // 0x10e4e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4ECu;
        goto label_10e4ec;
    }
    ctx->pc = 0x10E4E4u;
    SET_GPR_U32(ctx, 31, 0x10E4ECu);
    ctx->pc = 0x10E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4E4u;
    // 0x10e4e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E4E4u, 0x10E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4ECu;
label_10e4ec:
    // 0x10e4ec: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x10e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_10e4f0:
    // 0x10e4f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e4f4:
    // 0x10e4f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_10e4f8:
    if (ctx->pc == 0x10E4F8u) {
        ctx->pc = 0x10E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F4u;
        // 0x10e4f8: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4FCu;
        goto label_fallthrough_0x10e4f4;
    }
    ctx->pc = 0x10E4F4u;
    {
        const bool branch_taken_0x10e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F4u;
        // 0x10e4f8: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f4) {
            ctx->pc = 0x10E514u;
            return;
        }
    }
label_fallthrough_0x10e4f4:
    ctx->pc = 0x10E4FCu;
}
