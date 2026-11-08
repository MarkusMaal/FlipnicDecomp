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

// Function: entry_00147988
// Address: 0x147988 - 0x147a10
void entry_00147988_0x147988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147988_0x147988");
#endif

    switch (ctx->pc) {
        case 0x1479dcu: goto label_1479dc;
        case 0x1479f4u: goto label_1479f4;
        default: break;
    }

    ctx->pc = 0x147988u;

label_147988:
    // 0x147988: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_14798c:
    // 0x14798c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_147990:
    if (ctx->pc == 0x147990u) {
        ctx->pc = 0x147994u;
        goto label_147994;
    }
    ctx->pc = 0x14798Cu;
    {
        const bool branch_taken_0x14798c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14798c) {
            ctx->pc = 0x147A68u;
            return;
        }
    }
    ctx->pc = 0x147994u;
label_147994:
    // 0x147994: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x147994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147998:
    // 0x147998: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x147998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14799c:
    // 0x14799c: 0x8e850280  lw          $a1, 0x280($s4)
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 640)));
label_1479a0:
    // 0x1479a0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1479a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479a4:
    // 0x1479a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1479a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1479a8:
    // 0x1479a8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1479a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1479ac:
    // 0x1479ac: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1479acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1479b0:
    // 0x1479b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1479b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1479b4:
    // 0x1479b4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1479b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_1479b8:
    // 0x1479b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1479b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1479bc:
    // 0x1479bc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1479bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1479c0:
    // 0x1479c0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1479c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479c4:
    // 0x1479c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1479c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1479c8:
    // 0x1479c8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1479cc:
    // 0x1479cc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479d0:
    // 0x1479d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1479d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1479d4:
    // 0x1479d4: 0xc0485c0  jal         func_121700
label_1479d8:
    if (ctx->pc == 0x1479D8u) {
        ctx->pc = 0x1479D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D4u;
        // 0x1479d8: 0x8e8502bc  lw          $a1, 0x2BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1479DCu;
        goto label_1479dc;
    }
    ctx->pc = 0x1479D4u;
    SET_GPR_U32(ctx, 31, 0x1479DCu);
    ctx->pc = 0x1479D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1479D4u;
    // 0x1479d8: 0x8e8502bc  lw          $a1, 0x2BC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x1479D4u, 0x1479DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479DCu;
label_1479dc:
    // 0x1479dc: 0x8e8402bc  lw          $a0, 0x2BC($s4)
    ctx->pc = 0x1479dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
label_1479e0:
    // 0x1479e0: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x1479e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479e4:
    // 0x1479e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1479e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1479e8:
    // 0x1479e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1479ec:
    // 0x1479ec: 0x320f809  jalr        $t9
label_1479f0:
    if (ctx->pc == 0x1479F0u) {
        ctx->pc = 0x1479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479ECu;
        // 0x1479f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1479F4u;
        goto label_1479f4;
    }
    ctx->pc = 0x1479ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1479F4u);
        ctx->pc = 0x1479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479ECu;
        // 0x1479f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479ECu, 0x1479F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1479F4u;
label_1479f4:
    // 0x1479f4: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1479f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1479f8:
    // 0x1479f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1479f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1479fc:
    // 0x1479fc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_147a00:
    if (ctx->pc == 0x147A00u) {
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479FCu;
        // 0x147a00: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147A04u;
        goto label_147a04;
    }
    ctx->pc = 0x1479FCu;
    {
        const bool branch_taken_0x1479fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479FCu;
        // 0x147a00: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479fc) {
            ctx->pc = 0x147A10u;
            return;
        }
    }
    ctx->pc = 0x147A04u;
label_147a04:
    // 0x147a04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_147a08:
    if (ctx->pc == 0x147A08u) {
        ctx->pc = 0x147A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A04u;
        // 0x147a08: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147A0Cu;
        goto label_147a0c;
    }
    ctx->pc = 0x147A04u;
    {
        const bool branch_taken_0x147a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A04u;
        // 0x147a08: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a04) {
            ctx->pc = 0x147A14u;
            return;
        }
    }
    ctx->pc = 0x147A0Cu;
label_147a0c:
    // 0x147a0c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->pc = 0x147a10u;
}
