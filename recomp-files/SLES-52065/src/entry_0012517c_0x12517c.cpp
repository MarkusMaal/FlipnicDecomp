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

// Function: entry_0012517c
// Address: 0x12517c - 0x125294
void entry_0012517c_0x12517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012517c_0x12517c");
#endif

    switch (ctx->pc) {
        case 0x125200u: goto label_125200;
        case 0x12521cu: goto label_12521c;
        default: break;
    }

    ctx->pc = 0x12517cu;

    // 0x12517c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125180: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x125184: 0x3c09002b  lui         $t1, 0x2B
    ctx->pc = 0x125184u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)43 << 16));
    // 0x125188: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12518c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125190: 0x25292d30  addiu       $t1, $t1, 0x2D30
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11568));
    // 0x125194: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x125194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125198: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x12519c: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x12519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1251a0: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1251a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1251a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1251a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251ac: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x1251acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1251b0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x1251b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1251b4: 0xad690004  sw          $t1, 0x4($t3)
    ctx->pc = 0x1251b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 9));
    // 0x1251b8: 0xa5680000  sh          $t0, 0x0($t3)
    ctx->pc = 0x1251b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1251bc: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x1251bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x1251c0: 0xad64000c  sw          $a0, 0xC($t3)
    ctx->pc = 0x1251c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 4));
    // 0x1251c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1251c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1251cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1251d0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1251d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x1251d4: 0x96440060  lhu         $a0, 0x60($s2)
    ctx->pc = 0x1251d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1251d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1251dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1251e0: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x1251e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1251e4: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1251e8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1251ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1251f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1251f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1251f8: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x1251F8u;
    SET_GPR_U32(ctx, 31, 0x125200u);
    ctx->pc = 0x1251FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251F8u;
    // 0x1251fc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x1251F8u, 0x125200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125200u;
label_125200:
    // 0x125200: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x125204: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x125208: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x125208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12520c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x125210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x125214: 0xc048148  jal         func_120520
    ctx->pc = 0x125214u;
    SET_GPR_U32(ctx, 31, 0x12521Cu);
    ctx->pc = 0x125218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125214u;
    // 0x125218: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x125214u, 0x12521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12521Cu;
label_12521c:
    // 0x12521c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x125220: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x125220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x125224: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x125224u;
    {
        const bool branch_taken_0x125224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125224u;
        // 0x125228: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125224) {
            ctx->pc = 0x125294u;
            return;
        }
    }
    ctx->pc = 0x12522Cu;
    // 0x12522c: 0x32023fff  andi        $v0, $s0, 0x3FFF
    ctx->pc = 0x12522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x125230: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125234: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x125234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x125238: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x12523c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x125240: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x125240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x125244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x125244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x125248: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12524c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x125250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125254: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125258: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x125258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x12525c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x125260: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x125260u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x125264: 0x8e46009c  lw          $a2, 0x9C($s2)
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x125268: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x125268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12526c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x125270: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x125274: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x125274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x125278: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12527c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x125280: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x125284: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x125284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125288: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x125288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12528c: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x12528Cu;
    SET_GPR_U32(ctx, 31, 0x125294u);
    ctx->pc = 0x125290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12528Cu;
    // 0x125290: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x12528Cu, 0x125294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125294u;
}
