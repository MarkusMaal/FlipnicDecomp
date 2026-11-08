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

// Function: entry_0016d6a4
// Address: 0x16d6a4 - 0x16d748
void entry_0016d6a4_0x16d6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d6a4_0x16d6a4");
#endif

    switch (ctx->pc) {
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d724u: goto label_16d724;
        case 0x16d738u: goto label_16d738;
        default: break;
    }

    ctx->pc = 0x16d6a4u;

    // 0x16d6a4: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16d6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16d6a8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x16D6A8u;
    {
        const bool branch_taken_0x16d6a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6A8u;
        // 0x16d6ac: 0x2a010000  slti        $at, $s0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6a8) {
            ctx->pc = 0x16D758u;
            return;
        }
    }
    ctx->pc = 0x16D6B0u;
    // 0x16d6b0: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d6b8: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16D6B8u;
    {
        const bool branch_taken_0x16d6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d6b8) {
            ctx->pc = 0x16D758u;
            return;
        }
    }
    ctx->pc = 0x16D6C0u;
    // 0x16d6c0: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x16d6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16d6c8: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x16d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x16d6cc: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x16d6d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16D6D0u;
    {
        const bool branch_taken_0x16d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6D0u;
        // 0x16d6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6d0) {
            ctx->pc = 0x16D748u;
            return;
        }
    }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d6dc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16d6e0: 0x2484f440  addiu       $a0, $a0, -0xBC0
    ctx->pc = 0x16d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964288));
    // 0x16d6e4: 0xc046458  jal         func_119160
    ctx->pc = 0x16D6E4u;
    SET_GPR_U32(ctx, 31, 0x16D6ECu);
    ctx->pc = 0x16D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6E4u;
    // 0x16d6e8: 0xae2201d4  sw          $v0, 0x1D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x16D6E4u, 0x16D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6ECu;
label_16d6ec:
    // 0x16d6ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16d6f0: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x16d6f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16d6f4: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x16d6f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x16d6f8: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x16d6f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16d6fc: 0x7a290060  lq          $t1, 0x60($s1)
    ctx->pc = 0x16d6fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16d700: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x16d700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x16d704: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x16d704u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x16d708: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x16d708u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x16d70c: 0x7ca90030  sq          $t1, 0x30($a1)
    ctx->pc = 0x16d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 9));
    // 0x16d710: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d714: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16d718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d71c: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x16D71Cu;
    SET_GPR_U32(ctx, 31, 0x16D724u);
    ctx->pc = 0x16D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D71Cu;
    // 0x16d720: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x16D71Cu, 0x16D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D724u;
label_16d724:
    // 0x16d724: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d72c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d730: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D730u;
    SET_GPR_U32(ctx, 31, 0x16D738u);
    ctx->pc = 0x16D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D730u;
    // 0x16d734: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D730u, 0x16D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D738u;
label_16d738:
    // 0x16d738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d740: 0xa062002b  sb          $v0, 0x2B($v1)
    ctx->pc = 0x16d740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16d748u;
}
