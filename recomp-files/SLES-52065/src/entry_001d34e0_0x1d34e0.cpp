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

// Function: entry_001d34e0
// Address: 0x1d34e0 - 0x1d35b0
void entry_001d34e0_0x1d34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d34e0_0x1d34e0");
#endif

    switch (ctx->pc) {
        case 0x1d3528u: goto label_1d3528;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3558u: goto label_1d3558;
        case 0x1d356cu: goto label_1d356c;
        case 0x1d359cu: goto label_1d359c;
        case 0x1d35acu: goto label_1d35ac;
        default: break;
    }

    ctx->pc = 0x1d34e0u;

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
            return;
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
    ctx->pc = 0x1d35b0u;
}
