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

// Function: entry_001008a4
// Address: 0x1008a4 - 0x100924
void entry_001008a4_0x1008a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001008a4_0x1008a4");
#endif

    switch (ctx->pc) {
        case 0x1008ccu: goto label_1008cc;
        default: break;
    }

    ctx->pc = 0x1008a4u;

    // 0x1008a4: 0x0  nop
    ctx->pc = 0x1008a4u;
    // NOP
    // 0x1008a8: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1008a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1008ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1008b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1008b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1008b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1008bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1008c0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1008c4: 0xc04cd10  jal         func_133440
    ctx->pc = 0x1008C4u;
    SET_GPR_U32(ctx, 31, 0x1008CCu);
    ctx->pc = 0x1008C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008C4u;
    // 0x1008c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133440u, 0x1008C4u, 0x1008CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008CCu;
label_1008cc:
    // 0x1008cc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1008d0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1008d4: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1008d8: 0x2484f388  addiu       $a0, $a0, -0xC78
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964104));
    // 0x1008dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1008e0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1008e4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1008e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1008e8: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1008ec: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1008ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1008f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1008f4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1008f8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1008fc: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x100900: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100904: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100908: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10090c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x100910: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x100914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100918: 0x78460250  lq          $a2, 0x250($v0)
    ctx->pc = 0x100918u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x10091c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x10091cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x100920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x100924u;
}
