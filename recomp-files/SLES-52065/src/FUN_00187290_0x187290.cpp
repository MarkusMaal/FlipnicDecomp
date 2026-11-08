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

// Function: FUN_00187290
// Address: 0x187290 - 0x187598
void FUN_00187290_0x187290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187290_0x187290");
#endif

    switch (ctx->pc) {
        case 0x1872c4u: goto label_1872c4;
        case 0x1872d8u: goto label_1872d8;
        case 0x1872f4u: goto label_1872f4;
        case 0x187310u: goto label_187310;
        case 0x187318u: goto label_187318;
        case 0x187338u: goto label_187338;
        case 0x18734cu: goto label_18734c;
        case 0x187384u: goto label_187384;
        case 0x187390u: goto label_187390;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873e8u: goto label_1873e8;
        case 0x187408u: goto label_187408;
        case 0x18741cu: goto label_18741c;
        case 0x187438u: goto label_187438;
        case 0x18744cu: goto label_18744c;
        case 0x187460u: goto label_187460;
        case 0x18747cu: goto label_18747c;
        case 0x187500u: goto label_187500;
        case 0x187514u: goto label_187514;
        case 0x187540u: goto label_187540;
        case 0x18755cu: goto label_18755c;
        case 0x187570u: goto label_187570;
        case 0x18757cu: goto label_18757c;
        default: break;
    }

    ctx->pc = 0x187290u;

    // 0x187290: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x187294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187298: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18729c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1872a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1872a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1872a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1872a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1872a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1872ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1872acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1872b0: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x1872b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1872b4: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x1872b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1872b8: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x1872b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1872bc: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x1872BCu;
    SET_GPR_U32(ctx, 31, 0x1872C4u);
    ctx->pc = 0x1872C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872BCu;
    // 0x1872c0: 0xf85f0030  sqc2        $vf31, 0x30($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1872BCu, 0x1872C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872C4u;
label_1872c4:
    // 0x1872c4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1872c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1872c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1872c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1872cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1872ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1872d0: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x1872D0u;
    SET_GPR_U32(ctx, 31, 0x1872D8u);
    ctx->pc = 0x1872D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872D0u;
    // 0x1872d4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1872D0u, 0x1872D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872D8u;
label_1872d8:
    // 0x1872d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1872d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1872dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1872e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1872e4: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1872E4u;
    {
        const bool branch_taken_0x1872e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872e4) {
            ctx->pc = 0x18757Cu;
            goto label_18757c;
        }
    }
    ctx->pc = 0x1872ECu;
    // 0x1872ec: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x1872ECu;
    SET_GPR_U32(ctx, 31, 0x1872F4u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1872ECu, 0x1872F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872F4u;
label_1872f4:
    // 0x1872f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1872f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1872f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1872fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187300: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x187300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x187304: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187308: 0xc061e48  jal         func_187920
    ctx->pc = 0x187308u;
    SET_GPR_U32(ctx, 31, 0x187310u);
    ctx->pc = 0x18730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187308u;
    // 0x18730c: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187920u, 0x187308u, 0x187310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187310u;
label_187310:
    // 0x187310: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x187310u;
    {
        const bool branch_taken_0x187310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187310u;
        // 0x187314: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187310) {
            ctx->pc = 0x187388u;
            goto label_187388;
        }
    }
    ctx->pc = 0x187318u;
label_187318:
    // 0x187318: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18731c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x187320: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x187324: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x187328: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18732c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187330: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x187330u;
    SET_GPR_U32(ctx, 31, 0x187338u);
    ctx->pc = 0x187334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187330u;
    // 0x187334: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x187330u, 0x187338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187338u;
label_187338:
    // 0x187338: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18733c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x18733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x187340: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x187340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187344: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x187344u;
    SET_GPR_U32(ctx, 31, 0x18734Cu);
    ctx->pc = 0x187348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187344u;
    // 0x187348: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x187344u, 0x18734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18734Cu;
label_18734c:
    // 0x18734c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x187350: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x187354: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x187358: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18735c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187360: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x187364: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187368: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x187368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18736c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x18736cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x187370: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x187370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187374: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x187378: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x187378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x18737c: 0xc061e24  jal         func_187890
    ctx->pc = 0x18737Cu;
    SET_GPR_U32(ctx, 31, 0x187384u);
    ctx->pc = 0x187380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18737Cu;
    // 0x187380: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187890u, 0x18737Cu, 0x187384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187384u;
label_187384:
    // 0x187384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187388:
    // 0x187388: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x187388u;
    SET_GPR_U32(ctx, 31, 0x187390u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x187388u, 0x187390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187390u;
label_187390:
    // 0x187390: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x187390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x187394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187398: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18739c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x18739cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1873a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1873A0u;
    {
        const bool branch_taken_0x1873a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1873a0) {
            ctx->pc = 0x187318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187318;
        }
    }
    ctx->pc = 0x1873A8u;
    // 0x1873a8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1873ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1873ACu;
    {
        const bool branch_taken_0x1873ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873ACu;
        // 0x1873b0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873ac) {
            ctx->pc = 0x1873ECu;
            goto label_1873ec;
        }
    }
    ctx->pc = 0x1873B4u;
label_1873b4:
    // 0x1873b4: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x1873b8: 0x24429670  addiu       $v0, $v0, -0x6990
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940272));
    // 0x1873bc: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x1873c0: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1873c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1873c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1873c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1873c8: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x1873c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x1873cc: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1873d0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1873d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1873d4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1873d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1873d8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1873dc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1873dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1873e0: 0xc061e24  jal         func_187890
    ctx->pc = 0x1873E0u;
    SET_GPR_U32(ctx, 31, 0x1873E8u);
    ctx->pc = 0x1873E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873E0u;
    // 0x1873e4: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187890u, 0x1873E0u, 0x1873E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873E8u;
label_1873e8:
    // 0x1873e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1873ec:
    // 0x1873ec: 0x0  nop
    ctx->pc = 0x1873ecu;
    // NOP
    // 0x1873f0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1873f4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1873F4u;
    {
        const bool branch_taken_0x1873f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1873F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873F4u;
        // 0x1873f8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873f4) {
            ctx->pc = 0x1873B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1873b4;
        }
    }
    ctx->pc = 0x1873FCu;
    // 0x1873fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1873fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187400: 0xc061d6c  jal         func_1875B0
    ctx->pc = 0x187400u;
    SET_GPR_U32(ctx, 31, 0x187408u);
    ctx->pc = 0x187404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187400u;
    // 0x187404: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875B0u, 0x187400u, 0x187408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187408u;
label_187408:
    // 0x187408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18740c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x18740cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x187410: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x187414: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x187414u;
    {
        const bool branch_taken_0x187414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187414u;
        // 0x187418: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187414) {
            ctx->pc = 0x187468u;
            goto label_187468;
        }
    }
    ctx->pc = 0x18741Cu;
label_18741c:
    // 0x18741c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x18741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187420: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x187420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x187424: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x187428: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x18742c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x18742cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x187430: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x187430u;
    SET_GPR_U32(ctx, 31, 0x187438u);
    ctx->pc = 0x187434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187430u;
    // 0x187434: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x187430u, 0x187438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187438u;
label_187438:
    // 0x187438: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x18743c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187440: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187444: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x187444u;
    SET_GPR_U32(ctx, 31, 0x18744Cu);
    ctx->pc = 0x187448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187444u;
    // 0x187448: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x187444u, 0x18744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18744Cu;
label_18744c:
    // 0x18744c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187450: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x187454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187458: 0xc048974  jal         func_1225D0
    ctx->pc = 0x187458u;
    SET_GPR_U32(ctx, 31, 0x187460u);
    ctx->pc = 0x18745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187458u;
    // 0x18745c: 0xafa20178  sw          $v0, 0x178($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x187458u, 0x187460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x187464: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x187464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_187468:
    // 0x187468: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18746c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18746Cu;
    {
        const bool branch_taken_0x18746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18746Cu;
        // 0x187470: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18746c) {
            ctx->pc = 0x18741Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18741c;
        }
    }
    ctx->pc = 0x187474u;
    // 0x187474: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x187474u;
    SET_GPR_U32(ctx, 31, 0x18747Cu);
    ctx->pc = 0x187478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187474u;
    // 0x187478: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x187474u, 0x18747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18747Cu;
label_18747c:
    // 0x18747c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x18747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x187480: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x187484: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x187484u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187488: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x187488u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18748c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x18748cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x187490: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x187490u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x187494: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187498: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18749c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18749cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1874a0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1874a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1874a4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x1874a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874a8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x1874a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874ac: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x1874acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874b0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x1874b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1874b4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x1874b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874b8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x1874b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874bc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x1874bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874c0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x1874c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1874c4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x1874c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874c8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x1874c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874cc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x1874ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874d0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x1874d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1874d4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x1874d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874d8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x1874d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874dc: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x1874dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1874e0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x1874e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1874e4: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1874e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1874e8: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1874e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1874ec: 0xfa660020  sqc2        $vf6, 0x20($s3)
    ctx->pc = 0x1874ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1874f0: 0xfa670030  sqc2        $vf7, 0x30($s3)
    ctx->pc = 0x1874f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1874f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1874f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1874f8: 0xc061d6c  jal         func_1875B0
    ctx->pc = 0x1874F8u;
    SET_GPR_U32(ctx, 31, 0x187500u);
    ctx->pc = 0x1874FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874F8u;
    // 0x1874fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875B0u, 0x1874F8u, 0x187500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187500u;
label_187500:
    // 0x187500: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187504: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x187504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x187508: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x18750c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18750Cu;
        // 0x187510: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187548u;
            goto label_187548;
        }
    }
    ctx->pc = 0x187514u;
label_187514:
    // 0x187514: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187518: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18751c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187520: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x187524: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187528: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18752c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x18752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187530: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x187530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x187534: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187538: 0xc048974  jal         func_1225D0
    ctx->pc = 0x187538u;
    SET_GPR_U32(ctx, 31, 0x187540u);
    ctx->pc = 0x18753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187538u;
    // 0x18753c: 0xafa2017c  sw          $v0, 0x17C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x187538u, 0x187540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187540u;
label_187540:
    // 0x187540: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x187540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x187544: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x187544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_187548:
    // 0x187548: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x187548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18754c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18754Cu;
    {
        const bool branch_taken_0x18754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18754Cu;
        // 0x187550: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18754c) {
            ctx->pc = 0x187514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187514;
        }
    }
    ctx->pc = 0x187554u;
    // 0x187554: 0xc061d68  jal         func_1875A0
    ctx->pc = 0x187554u;
    SET_GPR_U32(ctx, 31, 0x18755Cu);
    ctx->pc = 0x1875A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875A0u, 0x187554u, 0x18755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18755Cu;
label_18755c:
    // 0x18755c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187560: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187560u;
    {
        const bool branch_taken_0x187560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187560u;
        // 0x187564: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187560) {
            ctx->pc = 0x18757Cu;
            goto label_18757c;
        }
    }
    ctx->pc = 0x187568u;
    // 0x187568: 0xc061d68  jal         func_1875A0
    ctx->pc = 0x187568u;
    SET_GPR_U32(ctx, 31, 0x187570u);
    ctx->pc = 0x1875A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875A0u, 0x187568u, 0x187570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187570u;
label_187570:
    // 0x187570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187574: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187574u;
    SET_GPR_U32(ctx, 31, 0x18757Cu);
    ctx->pc = 0x187578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187574u;
    // 0x187578: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x187574u, 0x18757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18757Cu;
label_18757c:
    // 0x18757c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18757cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18758c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18758cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187590: 0x3e00008  jr          $ra
    ctx->pc = 0x187590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187590u;
        // 0x187594: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187598u;
}
