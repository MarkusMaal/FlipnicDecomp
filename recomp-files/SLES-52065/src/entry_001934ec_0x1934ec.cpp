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

// Function: entry_001934ec
// Address: 0x1934ec - 0x193578
void entry_001934ec_0x1934ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001934ec_0x1934ec");
#endif

    switch (ctx->pc) {
        case 0x193548u: goto label_193548;
        case 0x193570u: goto label_193570;
        default: break;
    }

    ctx->pc = 0x1934ecu;

    // 0x1934ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1934ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1934f0: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1934f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1934f4: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x1934f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1934f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1934f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1934fc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1934fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x193500: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x193500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x193504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193508: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x193508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19350c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19350cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193510: 0x0  nop
    ctx->pc = 0x193510u;
    // NOP
    // 0x193514: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x193514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x193518: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x193518u;
    {
        const bool branch_taken_0x193518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x19351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193518u;
        // 0x19351c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193518) {
            ctx->pc = 0x193578u;
            return;
        }
    }
    ctx->pc = 0x193520u;
    // 0x193520: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193524: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x193524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x193528: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x19352c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193530: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x193534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193538: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19353c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x19353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x193540: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x193540u;
    SET_GPR_U32(ctx, 31, 0x193548u);
    ctx->pc = 0x193544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193540u;
    // 0x193544: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x193540u, 0x193548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193548u;
label_193548:
    // 0x193548: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x19354c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193554: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x193554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193558: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193558u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x19355c: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x193560: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x193560u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x193564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193568: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193568u;
    SET_GPR_U32(ctx, 31, 0x193570u);
    ctx->pc = 0x19356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193568u;
    // 0x19356c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193568u, 0x193570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193570u;
label_193570:
    // 0x193570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193570u;
        // 0x193574: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193570) {
            ctx->pc = 0x1935B4u;
            return;
        }
    }
    ctx->pc = 0x193578u;
}
