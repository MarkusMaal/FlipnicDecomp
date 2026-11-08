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

// Function: FUN_001d3480
// Address: 0x1d3480 - 0x1d35dc
void FUN_001d3480_0x1d3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3480_0x1d3480");
#endif

    switch (ctx->pc) {
        case 0x1d34ccu: goto label_1d34cc;
        case 0x1d3528u: goto label_1d3528;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3558u: goto label_1d3558;
        case 0x1d356cu: goto label_1d356c;
        case 0x1d359cu: goto label_1d359c;
        case 0x1d35acu: goto label_1d35ac;
        default: break;
    }

    ctx->pc = 0x1d3480u;

    // 0x1d3480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d3484: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d3488: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d3488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d348c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3490: 0x158840  sll         $s1, $s5, 1
    ctx->pc = 0x1d3490u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1d3494: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d3494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d3498: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1d3498u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1d349c: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1d349cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1d34a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d34a8: 0x26940448  addiu       $s4, $s4, 0x448
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1096));
    // 0x1d34ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d34acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d34b0: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x1d34b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1d34b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d34b8: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x1d34b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1d34bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d34c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d34c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d34c4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D34C4u;
    SET_GPR_U32(ctx, 31, 0x1D34CCu);
    ctx->pc = 0x1D34C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34C4u;
    // 0x1d34c8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D34C4u, 0x1D34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34CCu;
label_1d34cc:
    // 0x1d34cc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d34ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34d0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1d34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d34d4: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x1d34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1d34d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D34D8u;
    {
        const bool branch_taken_0x1d34d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34d8) {
            ctx->pc = 0x1D34DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D34D8u;
            // 0x1d34dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D34E0u;
            goto label_1d34e0;
        }
    }
    ctx->pc = 0x1D34E0u;
label_1d34e0:
    // 0x1d34e0: 0x8466000e  lh          $a2, 0xE($v1)
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1d34e4: 0x2913821  addu        $a3, $s4, $s1
    ctx->pc = 0x1d34e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d34e8: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x1d34e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d34ec: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1d34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d34f0: 0x69bc0  sll         $s3, $a2, 15
    ctx->pc = 0x1d34f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x1d34f4: 0x593c0  sll         $s2, $a1, 15
    ctx->pc = 0x1d34f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x1d34f8: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x1d34f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1d34fc: 0x2459023  subu        $s2, $s2, $a1
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1d3500: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d3500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3504: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x1d3504u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3508: 0x7242001a  div1        $zero, $s2, $v0
    ctx->pc = 0x1d3508u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 18); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1d350c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1d350cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d3510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3514: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d3518: 0x9812  mflo        $s3
    ctx->pc = 0x1d3518u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x1d351c: 0x70009012  mflo1       $s2
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 18, ctx->lo1);
    // 0x1d3520: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D3520u;
    SET_GPR_U32(ctx, 31, 0x1D3528u);
    ctx->pc = 0x1D3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3520u;
    // 0x1d3524: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D3520u, 0x1D3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3528u;
label_1d3528:
    // 0x1d3528: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x1d3528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1d352c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3530: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3534: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d3534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d353c: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D353Cu;
    SET_GPR_U32(ctx, 31, 0x1D3544u);
    ctx->pc = 0x1D3540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353Cu;
    // 0x1d3540: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D353Cu, 0x1D3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3544u;
label_1d3544:
    // 0x1d3544: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d3544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3548: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1d3548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d354c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3550: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D3550u;
    SET_GPR_U32(ctx, 31, 0x1D3558u);
    ctx->pc = 0x1D3554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3550u;
    // 0x1d3554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D3550u, 0x1D3558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3558u;
label_1d3558:
    // 0x1d3558: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d355c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3560: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d3560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3564: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D3564u;
    SET_GPR_U32(ctx, 31, 0x1D356Cu);
    ctx->pc = 0x1D3568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3564u;
    // 0x1d3568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D3564u, 0x1D356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D356Cu;
label_1d356c:
    // 0x1d356c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3570: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1d3574: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d3574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d3578: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1d3578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d357c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d3580: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d3584: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d3584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d3588: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1d3588u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1d358c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3590: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3594: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D3594u;
    SET_GPR_U32(ctx, 31, 0x1D359Cu);
    ctx->pc = 0x1D3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3594u;
    // 0x1d3598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D3594u, 0x1D359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D359Cu;
label_1d359c:
    // 0x1d359c: 0x52e00004  beql        $s7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D359Cu;
    {
        const bool branch_taken_0x1d359c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d359c) {
            ctx->pc = 0x1D35A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D359Cu;
            // 0x1d35a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D35B0u;
            goto label_1d35b0;
        }
    }
    ctx->pc = 0x1D35A4u;
    // 0x1d35a4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D35A4u;
    SET_GPR_U32(ctx, 31, 0x1D35ACu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D35A4u, 0x1D35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35ACu;
label_1d35ac:
    // 0x1d35ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d35acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d35b0:
    // 0x1d35b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d35b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d35b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d35b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d35b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d35bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d35bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d35c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d35c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d35c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d35c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d35c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d35c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d35ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d35d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d35d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35D4u;
        // 0x1d35d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35DCu;
}
