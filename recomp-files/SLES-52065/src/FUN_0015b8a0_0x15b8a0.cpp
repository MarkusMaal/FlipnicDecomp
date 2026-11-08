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

// Function: FUN_0015b8a0
// Address: 0x15b8a0 - 0x15b968
void FUN_0015b8a0_0x15b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b8a0_0x15b8a0");
#endif

    switch (ctx->pc) {
        case 0x15b8d4u: goto label_15b8d4;
        case 0x15b924u: goto label_15b924;
        default: break;
    }

    ctx->pc = 0x15b8a0u;

    // 0x15b8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b8b0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x15b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b8b4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x15b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x15b8b8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x15b8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b8bc: 0x8205002a  lb          $a1, 0x2A($s0)
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15b8c0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x15b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B8C4u;
    {
        const bool branch_taken_0x15b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8C4u;
        // 0x15b8c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8c4) {
            ctx->pc = 0x15B8D4u;
            goto label_15b8d4;
        }
    }
    ctx->pc = 0x15B8CCu;
    // 0x15b8cc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15B8CCu;
    SET_GPR_U32(ctx, 31, 0x15B8D4u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15B8CCu, 0x15B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8D4u;
label_15b8d4:
    // 0x15b8d4: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x15b8d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15b8d8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15b8d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b8dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B8DCu;
    {
        const bool branch_taken_0x15b8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8dc) {
            ctx->pc = 0x15B8E8u;
            goto label_15b8e8;
        }
    }
    ctx->pc = 0x15B8E4u;
    // 0x15b8e4: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x15b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_15b8e8:
    // 0x15b8e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b8ec: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x15b8ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15b8f0: 0xa6230214  sh          $v1, 0x214($s1)
    ctx->pc = 0x15b8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 532), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b8f4: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15b8f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B8F8u;
    {
        const bool branch_taken_0x15b8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8F8u;
        // 0x15b8fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8f8) {
            ctx->pc = 0x15B904u;
            goto label_15b904;
        }
    }
    ctx->pc = 0x15B900u;
    // 0x15b900: 0xa6230214  sh          $v1, 0x214($s1)
    ctx->pc = 0x15b900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 532), (uint16_t)GPR_U32(ctx, 3));
label_15b904:
    // 0x15b904: 0x86230216  lh          $v1, 0x216($s1)
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
    // 0x15b908: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B908u;
    {
        const bool branch_taken_0x15b908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b908) {
            ctx->pc = 0x15B924u;
            goto label_15b924;
        }
    }
    ctx->pc = 0x15B910u;
    // 0x15b910: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b91c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B91Cu;
    SET_GPR_U32(ctx, 31, 0x15B924u);
    ctx->pc = 0x15B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B91Cu;
    // 0x15b920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B91Cu, 0x15B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B924u;
label_15b924:
    // 0x15b924: 0x86240214  lh          $a0, 0x214($s1)
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15b928: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x15b92c: 0xa6240216  sh          $a0, 0x216($s1)
    ctx->pc = 0x15b92cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 534), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b930: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x15b930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15b934: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15b938: 0xa6240212  sh          $a0, 0x212($s1)
    ctx->pc = 0x15b938u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 530), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b93c: 0x86240212  lh          $a0, 0x212($s1)
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
    // 0x15b940: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B940u;
    {
        const bool branch_taken_0x15b940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B940u;
        // 0x15b944: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b940) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B948u;
    // 0x15b948: 0xa6230212  sh          $v1, 0x212($s1)
    ctx->pc = 0x15b948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 530), (uint16_t)GPR_U32(ctx, 3));
label_15b94c:
    // 0x15b94c: 0xa6200210  sh          $zero, 0x210($s1)
    ctx->pc = 0x15b94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b950: 0xa6200218  sh          $zero, 0x218($s1)
    ctx->pc = 0x15b950u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b95c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b960: 0x3e00008  jr          $ra
    ctx->pc = 0x15B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B960u;
        // 0x15b964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B968u;
}
