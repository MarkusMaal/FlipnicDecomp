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

// Function: FUN_001a6890
// Address: 0x1a6890 - 0x1a6a70
void FUN_001a6890_0x1a6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6890_0x1a6890");
#endif

    switch (ctx->pc) {
        case 0x1a6890u: goto label_1a6890;
        case 0x1a6894u: goto label_1a6894;
        case 0x1a6898u: goto label_1a6898;
        case 0x1a689cu: goto label_1a689c;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68a4u: goto label_1a68a4;
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68acu: goto label_1a68ac;
        case 0x1a68b0u: goto label_1a68b0;
        case 0x1a68b4u: goto label_1a68b4;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68bcu: goto label_1a68bc;
        case 0x1a68c0u: goto label_1a68c0;
        case 0x1a68c4u: goto label_1a68c4;
        case 0x1a68c8u: goto label_1a68c8;
        case 0x1a68ccu: goto label_1a68cc;
        case 0x1a68d0u: goto label_1a68d0;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a68d8u: goto label_1a68d8;
        case 0x1a68dcu: goto label_1a68dc;
        case 0x1a68e0u: goto label_1a68e0;
        case 0x1a68e4u: goto label_1a68e4;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a68ecu: goto label_1a68ec;
        case 0x1a68f0u: goto label_1a68f0;
        case 0x1a68f4u: goto label_1a68f4;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a68fcu: goto label_1a68fc;
        case 0x1a6900u: goto label_1a6900;
        case 0x1a6904u: goto label_1a6904;
        case 0x1a6908u: goto label_1a6908;
        case 0x1a690cu: goto label_1a690c;
        case 0x1a6910u: goto label_1a6910;
        case 0x1a6914u: goto label_1a6914;
        case 0x1a6918u: goto label_1a6918;
        case 0x1a691cu: goto label_1a691c;
        case 0x1a6920u: goto label_1a6920;
        case 0x1a6924u: goto label_1a6924;
        case 0x1a6928u: goto label_1a6928;
        case 0x1a692cu: goto label_1a692c;
        case 0x1a6930u: goto label_1a6930;
        case 0x1a6934u: goto label_1a6934;
        case 0x1a6938u: goto label_1a6938;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6940u: goto label_1a6940;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6948u: goto label_1a6948;
        case 0x1a694cu: goto label_1a694c;
        case 0x1a6950u: goto label_1a6950;
        case 0x1a6954u: goto label_1a6954;
        case 0x1a6958u: goto label_1a6958;
        case 0x1a695cu: goto label_1a695c;
        case 0x1a6960u: goto label_1a6960;
        case 0x1a6964u: goto label_1a6964;
        case 0x1a6968u: goto label_1a6968;
        case 0x1a696cu: goto label_1a696c;
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a6978u: goto label_1a6978;
        case 0x1a697cu: goto label_1a697c;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6984u: goto label_1a6984;
        case 0x1a6988u: goto label_1a6988;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a6990u: goto label_1a6990;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a699cu: goto label_1a699c;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69a8u: goto label_1a69a8;
        case 0x1a69acu: goto label_1a69ac;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69b4u: goto label_1a69b4;
        case 0x1a69b8u: goto label_1a69b8;
        case 0x1a69bcu: goto label_1a69bc;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69c4u: goto label_1a69c4;
        case 0x1a69c8u: goto label_1a69c8;
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a5cu: goto label_1a6a5c;
        case 0x1a6a60u: goto label_1a6a60;
        case 0x1a6a64u: goto label_1a6a64;
        case 0x1a6a68u: goto label_1a6a68;
        case 0x1a6a6cu: goto label_1a6a6c;
        default: break;
    }

    ctx->pc = 0x1a6890u;

label_1a6890:
    // 0x1a6890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a6894:
    // 0x1a6894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a6898:
    // 0x1a6898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a689c:
    // 0x1a689c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a68a0:
    // 0x1a68a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a68a4:
    if (ctx->pc == 0x1A68A4u) {
        ctx->pc = 0x1A68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A0u;
        // 0x1a68a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68A8u;
        goto label_1a68a8;
    }
    ctx->pc = 0x1A68A0u;
    {
        const bool branch_taken_0x1a68a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A0u;
        // 0x1a68a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68a0) {
            ctx->pc = 0x1A68B0u;
            goto label_1a68b0;
        }
    }
    ctx->pc = 0x1A68A8u;
label_1a68a8:
    // 0x1a68a8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1a68ac:
    if (ctx->pc == 0x1A68ACu) {
        ctx->pc = 0x1A68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A8u;
        // 0x1a68ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68B0u;
        goto label_1a68b0;
    }
    ctx->pc = 0x1A68A8u;
    {
        const bool branch_taken_0x1a68a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A8u;
        // 0x1a68ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68a8) {
            ctx->pc = 0x1A6A60u;
            goto label_1a6a60;
        }
    }
    ctx->pc = 0x1A68B0u;
label_1a68b0:
    // 0x1a68b0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1a68b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1a68b4:
    // 0x1a68b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a68b8:
    // 0x1a68b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a68bc:
    // 0x1a68bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a68bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a68c0:
    // 0x1a68c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a68c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a68c4:
    // 0x1a68c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a68c8:
    // 0x1a68c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a68cc:
    // 0x1a68cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a68ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a68d0:
    // 0x1a68d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a68d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a68d4:
    // 0x1a68d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a68d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a68d8:
    // 0x1a68d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a68d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a68dc:
    // 0x1a68dc: 0x0  nop
    ctx->pc = 0x1a68dcu;
    // NOP
label_1a68e0:
    // 0x1a68e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a68e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a68e4:
    // 0x1a68e4: 0x0  nop
    ctx->pc = 0x1a68e4u;
    // NOP
label_1a68e8:
    // 0x1a68e8: 0x0  nop
    ctx->pc = 0x1a68e8u;
    // NOP
label_1a68ec:
    // 0x1a68ec: 0x3012  mflo        $a2
    ctx->pc = 0x1a68ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1a68f0:
    // 0x1a68f0: 0xc0805c8  jal         func_201720
label_1a68f4:
    if (ctx->pc == 0x1A68F4u) {
        ctx->pc = 0x1A68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68F0u;
        // 0x1a68f4: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68F8u;
        goto label_1a68f8;
    }
    ctx->pc = 0x1A68F0u;
    SET_GPR_U32(ctx, 31, 0x1A68F8u);
    ctx->pc = 0x1A68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68F0u;
    // 0x1a68f4: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A68F0u, 0x1A68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68F8u;
label_1a68f8:
    // 0x1a68f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a68fc:
    // 0x1a68fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a6900:
    // 0x1a6900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6904:
    // 0x1a6904: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a6908:
    // 0x1a6908: 0x320f809  jalr        $t9
label_1a690c:
    if (ctx->pc == 0x1A690Cu) {
        ctx->pc = 0x1A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6908u;
        // 0x1a690c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6910u;
        goto label_1a6910;
    }
    ctx->pc = 0x1A6908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6910u);
        ctx->pc = 0x1A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6908u;
        // 0x1a690c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6908u, 0x1A6910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6910u;
label_1a6910:
    // 0x1a6910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6914:
    // 0x1a6914: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x1a6914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a6918:
    // 0x1a6918: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_1a691c:
    if (ctx->pc == 0x1A691Cu) {
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6920u;
        goto label_1a6920;
    }
    ctx->pc = 0x1A6918u;
    {
        const bool branch_taken_0x1a6918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6918) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A6920u;
label_1a6920:
    // 0x1a6920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6924:
    // 0x1a6924: 0x246306e0  addiu       $v1, $v1, 0x6E0
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1760));
label_1a6928:
    // 0x1a6928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a692c:
    // 0x1a692c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6930:
    // 0x1a6930: 0x400008  jr          $v0
label_1a6934:
    if (ctx->pc == 0x1A6934u) {
        ctx->pc = 0x1A6938u;
        goto label_1a6938;
    }
    ctx->pc = 0x1A6930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6938u: goto label_1a6938;
            case 0x1A6970u: goto label_1a6970;
            case 0x1A699Cu: goto label_1a699c;
            case 0x1A69A4u: goto label_1a69a4;
            case 0x1A69CCu: goto label_1a69cc;
            case 0x1A69F0u: goto label_1a69f0;
            case 0x1A6A1Cu: goto label_1a6a1c;
            case 0x1A6A58u: goto label_1a6a58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A6938u;
label_1a6938:
    // 0x1a6938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a693c:
    // 0x1a693c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6940:
    // 0x1a6940: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6944:
    // 0x1a6944: 0x320f809  jalr        $t9
label_1a6948:
    if (ctx->pc == 0x1A6948u) {
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A694Cu;
        goto label_1a694c;
    }
    ctx->pc = 0x1A6944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A694Cu);
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6944u, 0x1A694Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A694Cu;
label_1a694c:
    // 0x1a694c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6950:
    // 0x1a6950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6954:
    // 0x1a6954: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6958:
    // 0x1a6958: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a695c:
    // 0x1a695c: 0x320f809  jalr        $t9
label_1a6960:
    if (ctx->pc == 0x1A6960u) {
        ctx->pc = 0x1A6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A695Cu;
        // 0x1a6960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6964u;
        goto label_1a6964;
    }
    ctx->pc = 0x1A695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6964u);
        ctx->pc = 0x1A6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A695Cu;
        // 0x1a6960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A695Cu, 0x1A6964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6964u;
label_1a6964:
    // 0x1a6964: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6968:
    // 0x1a6968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a696c:
    // 0x1a696c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a6970:
    // 0x1a6970: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6974:
    // 0x1a6974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6978:
    // 0x1a6978: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a697c:
    // 0x1a697c: 0x320f809  jalr        $t9
label_1a6980:
    if (ctx->pc == 0x1A6980u) {
        ctx->pc = 0x1A6984u;
        goto label_1a6984;
    }
    ctx->pc = 0x1A697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A697Cu, 0x1A6984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6984u;
label_1a6984:
    // 0x1a6984: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1a6988:
    if (ctx->pc == 0x1A6988u) {
        ctx->pc = 0x1A698Cu;
        goto label_1a698c;
    }
    ctx->pc = 0x1A6984u;
    {
        const bool branch_taken_0x1a6984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6984) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A698Cu;
label_1a698c:
    // 0x1a698c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6990:
    // 0x1a6990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6994:
    // 0x1a6994: 0x10000030  b           . + 4 + (0x30 << 2)
label_1a6998:
    if (ctx->pc == 0x1A6998u) {
        ctx->pc = 0x1A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6994u;
        // 0x1a6998: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A699Cu;
        goto label_1a699c;
    }
    ctx->pc = 0x1A6994u;
    {
        const bool branch_taken_0x1a6994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6994u;
        // 0x1a6998: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6994) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A699Cu;
label_1a699c:
    // 0x1a699c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1a699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a69a0:
    // 0x1a69a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a69a4:
    // 0x1a69a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a69a8:
    // 0x1a69a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a69ac:
    // 0x1a69ac: 0x1c40002a  bgtz        $v0, . + 4 + (0x2A << 2)
label_1a69b0:
    if (ctx->pc == 0x1A69B0u) {
        ctx->pc = 0x1A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69ACu;
        // 0x1a69b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69B4u;
        goto label_1a69b4;
    }
    ctx->pc = 0x1A69ACu;
    {
        const bool branch_taken_0x1a69ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69ACu;
        // 0x1a69b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69ac) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A69B4u;
label_1a69b4:
    // 0x1a69b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a69b8:
    // 0x1a69b8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1a69b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_1a69bc:
    // 0x1a69bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a69c0:
    // 0x1a69c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a69c4:
    // 0x1a69c4: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a69c8:
    if (ctx->pc == 0x1A69C8u) {
        ctx->pc = 0x1A69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C4u;
        // 0x1a69c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69CCu;
        goto label_1a69cc;
    }
    ctx->pc = 0x1A69C4u;
    {
        const bool branch_taken_0x1a69c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C4u;
        // 0x1a69c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c4) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A69CCu;
label_1a69cc:
    // 0x1a69cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a69d0:
    // 0x1a69d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a69d4:
    // 0x1a69d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a69d8:
    // 0x1a69d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a69dc:
    // 0x1a69dc: 0x320f809  jalr        $t9
label_1a69e0:
    if (ctx->pc == 0x1A69E0u) {
        ctx->pc = 0x1A69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69DCu;
        // 0x1a69e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69E4u;
        goto label_1a69e4;
    }
    ctx->pc = 0x1A69DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A69E4u);
        ctx->pc = 0x1A69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69DCu;
        // 0x1a69e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69DCu, 0x1A69E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A69E4u;
label_1a69e4:
    // 0x1a69e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a69e8:
    // 0x1a69e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a69ec:
    // 0x1a69ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a69f0:
    // 0x1a69f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a69f4:
    // 0x1a69f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a69f8:
    // 0x1a69f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a69fc:
    // 0x1a69fc: 0x320f809  jalr        $t9
label_1a6a00:
    if (ctx->pc == 0x1A6A00u) {
        ctx->pc = 0x1A6A04u;
        goto label_1a6a04;
    }
    ctx->pc = 0x1A69FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69FCu, 0x1A6A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A04u;
label_1a6a04:
    // 0x1a6a04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a6a08:
    if (ctx->pc == 0x1A6A08u) {
        ctx->pc = 0x1A6A0Cu;
        goto label_1a6a0c;
    }
    ctx->pc = 0x1A6A04u;
    {
        const bool branch_taken_0x1a6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a04) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A6A0Cu;
label_1a6a0c:
    // 0x1a6a0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6a10:
    // 0x1a6a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6a14:
    // 0x1a6a14: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a6a18:
    if (ctx->pc == 0x1A6A18u) {
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A1Cu;
        goto label_1a6a1c;
    }
    ctx->pc = 0x1A6A14u;
    {
        const bool branch_taken_0x1a6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a14) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A6A1Cu;
label_1a6a1c:
    // 0x1a6a1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6a20:
    // 0x1a6a20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6a24:
    // 0x1a6a24: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6a28:
    // 0x1a6a28: 0x320f809  jalr        $t9
label_1a6a2c:
    if (ctx->pc == 0x1A6A2Cu) {
        ctx->pc = 0x1A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A28u;
        // 0x1a6a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A30u;
        goto label_1a6a30;
    }
    ctx->pc = 0x1A6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A30u);
        ctx->pc = 0x1A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A28u;
        // 0x1a6a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A28u, 0x1A6A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A30u;
label_1a6a30:
    // 0x1a6a30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6a34:
    // 0x1a6a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6a38:
    // 0x1a6a38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6a3c:
    // 0x1a6a3c: 0x320f809  jalr        $t9
label_1a6a40:
    if (ctx->pc == 0x1A6A40u) {
        ctx->pc = 0x1A6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A3Cu;
        // 0x1a6a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A44u;
        goto label_1a6a44;
    }
    ctx->pc = 0x1A6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A44u);
        ctx->pc = 0x1A6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A3Cu;
        // 0x1a6a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A3Cu, 0x1A6A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A44u;
label_1a6a44:
    // 0x1a6a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a48:
    // 0x1a6a48: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1a6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_1a6a4c:
    // 0x1a6a4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6a50:
    // 0x1a6a50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6a54:
    // 0x1a6a54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a6a58:
    // 0x1a6a58: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1a6a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_1a6a5c:
    // 0x1a6a5c: 0x0  nop
    ctx->pc = 0x1a6a5cu;
    // NOP
label_1a6a60:
    // 0x1a6a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6a64:
    // 0x1a6a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6a68:
    // 0x1a6a68: 0x3e00008  jr          $ra
label_1a6a6c:
    if (ctx->pc == 0x1A6A6Cu) {
        ctx->pc = 0x1A6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A68u;
        // 0x1a6a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A70u;
        goto label_fallthrough_0x1a6a68;
    }
    ctx->pc = 0x1A6A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A68u;
        // 0x1a6a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6a68:
    ctx->pc = 0x1A6A70u;
}
