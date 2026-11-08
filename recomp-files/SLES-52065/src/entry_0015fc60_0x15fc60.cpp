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

// Function: entry_0015fc60
// Address: 0x15fc60 - 0x15fd00
void entry_0015fc60_0x15fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fc60_0x15fc60");
#endif

    switch (ctx->pc) {
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcecu: goto label_15fcec;
        default: break;
    }

    ctx->pc = 0x15fc60u;

    // 0x15fc60: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x15fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15fc64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15fc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fc68: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15fc6c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15fc70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fc74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15fc78: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15fc7c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15fc80: 0x2938821  addu        $s1, $s4, $s3
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x15fc84: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x15fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x15fc88: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x15fc8c: 0xa2200234  sb          $zero, 0x234($s1)
    ctx->pc = 0x15fc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc94: 0xa6200228  sh          $zero, 0x228($s1)
    ctx->pc = 0x15fc94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x15fc98: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x15fc98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x15fc9c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x15fc9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x15fca0: 0xc056294  jal         func_158A50
    ctx->pc = 0x15FCA0u;
    SET_GPR_U32(ctx, 31, 0x15FCA8u);
    ctx->pc = 0x15FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCA0u;
    // 0x15fca4: 0xa620022a  sh          $zero, 0x22A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A50u, 0x15FCA0u, 0x15FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCA8u;
label_15fca8:
    // 0x15fca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15fcb0: 0xac430200  sw          $v1, 0x200($v0)
    ctx->pc = 0x15fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 512), GPR_U32(ctx, 3));
    // 0x15fcb4: 0x26270310  addiu       $a3, $s1, 0x310
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x15fcb8: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x15fcbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15fcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcc0: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x15fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
    // 0x15fcc4: 0xc058138  jal         func_1604E0
    ctx->pc = 0x15FCC4u;
    SET_GPR_U32(ctx, 31, 0x15FCCCu);
    ctx->pc = 0x15FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCC4u;
    // 0x15fcc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x15FCC4u, 0x15FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCCCu;
label_15fccc:
    // 0x15fccc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fcd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15fcd8: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x15fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x15fcdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15fce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fce4: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x15FCE4u;
    SET_GPR_U32(ctx, 31, 0x15FCECu);
    ctx->pc = 0x15FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCE4u;
    // 0x15fce8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x15FCE4u, 0x15FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCECu;
label_15fcec:
    // 0x15fcec: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15fcf0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15fcf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15fcf4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15FCF4u;
    {
        const bool branch_taken_0x15fcf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCF4u;
        // 0x15fcf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcf4) {
            ctx->pc = 0x15FD00u;
            return;
        }
    }
    ctx->pc = 0x15FCFCu;
    // 0x15fcfc: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x15fcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15fd00u;
}
