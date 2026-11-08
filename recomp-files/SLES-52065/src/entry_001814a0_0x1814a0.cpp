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

// Function: entry_001814a0
// Address: 0x1814a0 - 0x181838
void entry_001814a0_0x1814a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001814a0_0x1814a0");
#endif

    switch (ctx->pc) {
        case 0x181830u: goto label_181830;
        default: break;
    }

    ctx->pc = 0x1814a0u;

    // 0x1814a0: 0x8382868c  lb          $v0, -0x7974($gp)
    ctx->pc = 0x1814a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x1814a4: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1814A4u;
    {
        const bool branch_taken_0x1814a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814a4) {
            ctx->pc = 0x181838u;
            return;
        }
    }
    ctx->pc = 0x1814ACu;
    // 0x1814ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1814acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1814b0: 0xac208a70  sw          $zero, -0x7590($at)
    ctx->pc = 0x1814b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), GPR_U32(ctx, 0));
    // 0x1814b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1814b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1814b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1814bc: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x1814c0: 0xac208a74  sw          $zero, -0x758C($at)
    ctx->pc = 0x1814c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368A74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368A74u, _value); } while (0);
    // 0x1814c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1814c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1814c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1814cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1814d0: 0xfc208a58  sd          $zero, -0x75A8($at)
    ctx->pc = 0x1814d0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368A58u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A58u, _value); } while (0);
    // 0x1814d4: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1814d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1814dc: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x1814dcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1814e0: 0xfc228a10  sd          $v0, -0x75F0($at)
    ctx->pc = 0x1814e0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937104), GPR_U64(ctx, 2));
    // 0x1814e4: 0x2408ffcf  addiu       $t0, $zero, -0x31
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1814e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1814ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1814f0: 0xfc238a18  sd          $v1, -0x75E8($at)
    ctx->pc = 0x1814f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368A18u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A18u, _value); } while (0);
    // 0x1814f4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1814f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1814f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1814fc: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x1814fcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x181500: 0xfc228a68  sd          $v0, -0x7598($at)
    ctx->pc = 0x181500u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937192), GPR_U64(ctx, 2));
    // 0x181504: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x181504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x181508: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18150c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x18150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x181510: 0x902b8a30  lbu         $t3, -0x75D0($at)
    ctx->pc = 0x181510u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x368A30u));
    // 0x181514: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x181518: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18151c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x18151cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x181520: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x181524: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x181524u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x181528: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18152c: 0x1725824  and         $t3, $t3, $s2
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
    // 0x181530: 0x90298a31  lbu         $t1, -0x75CF($at)
    ctx->pc = 0x181530u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937137)));
    // 0x181534: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x181534u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x181538: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18153c: 0x1284824  and         $t1, $t1, $t0
    ctx->pc = 0x18153cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x181540: 0x902f8a32  lbu         $t7, -0x75CE($at)
    ctx->pc = 0x181540u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937138)));
    // 0x181544: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181548: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
    // 0x18154c: 0x902c8a50  lbu         $t4, -0x75B0($at)
    ctx->pc = 0x18154cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
    // 0x181550: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x181550u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x181554: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x181558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18155c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x18155cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x181560: 0xa02b8a30  sb          $t3, -0x75D0($at)
    ctx->pc = 0x181560u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937136), (uint8_t)GPR_U32(ctx, 11));
    // 0x181564: 0x46080  sll         $t4, $a0, 2
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x181568: 0x1265825  or          $t3, $t1, $a2
    ctx->pc = 0x181568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x18156c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181570: 0x90298a30  lbu         $t1, -0x75D0($at)
    ctx->pc = 0x181570u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x368A30u));
    // 0x181574: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181578: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x181578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x18157c: 0xa02b8a31  sb          $t3, -0x75CF($at)
    ctx->pc = 0x18157cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937137), (uint8_t)GPR_U32(ctx, 11));
    // 0x181580: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x181580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x181584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181588: 0x459c0  sll         $t3, $a0, 7
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x18158c: 0x90328a31  lbu         $s2, -0x75CF($at)
    ctx->pc = 0x18158cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937137)));
    // 0x181590: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x181590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x181594: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x181594u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x181598: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18159c: 0xa02f8a32  sb          $t7, -0x75CE($at)
    ctx->pc = 0x18159cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x368A32u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A32u, _value); } while (0);
    // 0x1815a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815a4: 0x902b8a32  lbu         $t3, -0x75CE($at)
    ctx->pc = 0x1815a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x368A32u));
    // 0x1815a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815ac: 0xa02a8a50  sb          $t2, -0x75B0($at)
    ctx->pc = 0x1815acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368A50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A50u, _value); } while (0);
    // 0x1815b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815b4: 0x902a8a50  lbu         $t2, -0x75B0($at)
    ctx->pc = 0x1815b4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x368A50u));
    // 0x1815b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815bc: 0xa0258a30  sb          $a1, -0x75D0($at)
    ctx->pc = 0x1815bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368A30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A30u, _value); } while (0);
    // 0x1815c0: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x1815c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1815c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815c8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1815c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1815cc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1815ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1815d0: 0xa0238a31  sb          $v1, -0x75CF($at)
    ctx->pc = 0x1815d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937137), (uint8_t)GPR_U32(ctx, 3));
    // 0x1815d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1815d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1815dc: 0x16d1824  and         $v1, $t3, $t5
    ctx->pc = 0x1815dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x1815e0: 0x90298a51  lbu         $t1, -0x75AF($at)
    ctx->pc = 0x1815e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937169)));
    // 0x1815e4: 0x6e5825  or          $t3, $v1, $t6
    ctx->pc = 0x1815e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x1815e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1815ec: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1815f0: 0x47140  sll         $t6, $a0, 5
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1815f4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1815f8: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x1815f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x1815fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181600: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x181600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x181604: 0xa02b8a32  sb          $t3, -0x75CE($at)
    ctx->pc = 0x181604u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937138), (uint8_t)GPR_U32(ctx, 11));
    // 0x181608: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x18160c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181610: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181614: 0xa0228a50  sb          $v0, -0x75B0($at)
    ctx->pc = 0x181614u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A50u, _value); } while (0);
    // 0x181618: 0x2409fffb  addiu       $t1, $zero, -0x5
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18161c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181620: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x181620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x181624: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x181624u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368A50u));
    // 0x181628: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x181628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18162c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181630: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x181634: 0xa0238a51  sb          $v1, -0x75AF($at)
    ctx->pc = 0x181634u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937169), (uint8_t)GPR_U32(ctx, 3));
    // 0x181638: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x18163c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181640: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x181644: 0x902d8a51  lbu         $t5, -0x75AF($at)
    ctx->pc = 0x181644u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368A51u));
    // 0x181648: 0x300e0003  andi        $t6, $zero, 0x3
    ctx->pc = 0x181648u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18164c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181650: 0x1a94824  and         $t1, $t5, $t1
    ctx->pc = 0x181650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & GPR_U64(ctx, 9));
    // 0x181654: 0xa02b8a60  sb          $t3, -0x75A0($at)
    ctx->pc = 0x181654u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937184), (uint8_t)GPR_U32(ctx, 11));
    // 0x181658: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18165c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181660: 0xa02b8a61  sb          $t3, -0x759F($at)
    ctx->pc = 0x181660u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368A61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A61u, _value); } while (0);
    // 0x181664: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181668: 0xa0228a50  sb          $v0, -0x75B0($at)
    ctx->pc = 0x181668u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A50u, _value); } while (0);
    // 0x18166c: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x181670: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181674: 0xa4228a80  sh          $v0, -0x7580($at)
    ctx->pc = 0x181674u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A80u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368A80u, _value); } while (0);
    // 0x181678: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x18167c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181680: 0xa4228a82  sh          $v0, -0x757E($at)
    ctx->pc = 0x181680u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A82u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368A82u, _value); } while (0);
    // 0x181684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181688: 0x12c1025  or          $v0, $t1, $t4
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x18168c: 0xa02b8a62  sb          $t3, -0x759E($at)
    ctx->pc = 0x18168cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368A62u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A62u, _value); } while (0);
    // 0x181690: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181694: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181698: 0xa0228a51  sb          $v0, -0x75AF($at)
    ctx->pc = 0x181698u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A51u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A51u, _value); } while (0);
    // 0x18169c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1816a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1816a4: 0xa02b8a63  sb          $t3, -0x759D($at)
    ctx->pc = 0x1816a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937187), (uint8_t)GPR_U32(ctx, 11));
    // 0x1816a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816ac: 0xa02b8a44  sb          $t3, -0x75BC($at)
    ctx->pc = 0x1816acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368A44u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A44u, _value); } while (0);
    // 0x1816b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816b4: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1816b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1816b8: 0xac2a8a64  sw          $t2, -0x759C($at)
    ctx->pc = 0x1816b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), GPR_U32(ctx, 10));
    // 0x1816bc: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x1816bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1816c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816c4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1816c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1816c8: 0xac2a8a90  sw          $t2, -0x7570($at)
    ctx->pc = 0x1816c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), GPR_U32(ctx, 10));
    // 0x1816cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816d0: 0xac2a8a94  sw          $t2, -0x756C($at)
    ctx->pc = 0x1816d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368A94u, _value); } while (0);
    // 0x1816d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816d8: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x1816d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1816dc: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x1816dcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368A50u));
    // 0x1816e0: 0x14b4825  or          $t1, $t2, $t3
    ctx->pc = 0x1816e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1816e4: 0x712a5b89  pcpyld      $t3, $t1, $t2
    ctx->pc = 0x1816e4u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1816e8: 0x340a9400  ori         $t2, $zero, 0x9400
    ctx->pc = 0x1816e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x1816ec: 0x34098800  ori         $t1, $zero, 0x8800
    ctx->pc = 0x1816ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1816f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1816f4: 0x1e52824  and         $a1, $t7, $a1
    ctx->pc = 0x1816f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x1816f8: 0xdc2c8a80  ld          $t4, -0x7580($at)
    ctx->pc = 0x1816f8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 1), 4294937216)));
    // 0x1816fc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1816fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x181700: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181704: 0xa42a8aa0  sh          $t2, -0x7560($at)
    ctx->pc = 0x181704u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x368AA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368AA0u, _value); } while (0);
    // 0x181708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18170c: 0xa4298aa2  sh          $t1, -0x755E($at)
    ctx->pc = 0x18170cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368AA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368AA2u, _value); } while (0);
    // 0x181710: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181714: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181718: 0xdc2a8aa0  ld          $t2, -0x7560($at)
    ctx->pc = 0x181718u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x368AA0u));
    // 0x18171c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181720: 0x14b3024  and         $a2, $t2, $t3
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x181724: 0xfc298a78  sd          $t1, -0x7588($at)
    ctx->pc = 0x181724u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937208), GPR_U64(ctx, 9));
    // 0x181728: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x18172c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181730: 0xfc298a98  sd          $t1, -0x7568($at)
    ctx->pc = 0x181730u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 9)); ps2TraceGuestWrite(rdram, 0x368A98u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A98u, _value); } while (0);
    // 0x181734: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181738: 0x2409ff3f  addiu       $t1, $zero, -0xC1
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x18173c: 0xa0258a50  sb          $a1, -0x75B0($at)
    ctx->pc = 0x18173cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368A50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A50u, _value); } while (0);
    // 0x181740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181744: 0x18b2824  and         $a1, $t4, $t3
    ctx->pc = 0x181744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x181748: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x181748u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
    // 0x18174c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x18174cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x181750: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x181750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x181754: 0x240bfff3  addiu       $t3, $zero, -0xD
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x181758: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x18175c: 0x640c0008  daddiu      $t4, $zero, 0x8
    ctx->pc = 0x18175cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x181760: 0x24c68a00  addiu       $a2, $a2, -0x7600
    ctx->pc = 0x181760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937088));
    // 0x181764: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181768: 0x1e31824  and         $v1, $t7, $v1
    ctx->pc = 0x181768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x18176c: 0xfc258a80  sd          $a1, -0x7580($at)
    ctx->pc = 0x18176cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U64(ctx, 5));
    // 0x181770: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x181770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x181774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181778: 0x90258a40  lbu         $a1, -0x75C0($at)
    ctx->pc = 0x181778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x368A40u));
    // 0x18177c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181780: 0xad1824  and         $v1, $a1, $t5
    ctx->pc = 0x181780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x181784: 0xfc228aa0  sd          $v0, -0x7560($at)
    ctx->pc = 0x181784u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937248), GPR_U64(ctx, 2));
    // 0x181788: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x181788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18178c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x181790: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181794: 0xfc228a28  sd          $v0, -0x75D8($at)
    ctx->pc = 0x181794u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A28u, _value); } while (0);
    // 0x181798: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x181798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x18179c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817a0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1817a4: 0xa0248a50  sb          $a0, -0x75B0($at)
    ctx->pc = 0x1817a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368A50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A50u, _value); } while (0);
    // 0x1817a8: 0x24a51d80  addiu       $a1, $a1, 0x1D80
    ctx->pc = 0x1817a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7552));
    // 0x1817ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1817b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1817b4: 0xfc228a38  sd          $v0, -0x75C8($at)
    ctx->pc = 0x1817b4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A38u, _value); } while (0);
    // 0x1817b8: 0x24848a10  addiu       $a0, $a0, -0x75F0
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
    // 0x1817bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817c0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1817c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1817c4: 0xa0238a40  sb          $v1, -0x75C0($at)
    ctx->pc = 0x1817c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368A40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A40u, _value); } while (0);
    // 0x1817c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1817cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817d0: 0xfc238a88  sd          $v1, -0x7578($at)
    ctx->pc = 0x1817d0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368A88u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A88u, _value); } while (0);
    // 0x1817d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817d8: 0xfc238aa8  sd          $v1, -0x7558($at)
    ctx->pc = 0x1817d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368AA8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368AA8u, _value); } while (0);
    // 0x1817dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817e0: 0xfc228a48  sd          $v0, -0x75B8($at)
    ctx->pc = 0x1817e0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368A48u, _value); } while (0);
    // 0x1817e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817e8: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x1817e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368A40u));
    // 0x1817ec: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1817ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x1817f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1817f4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x1817f8: 0xa0228a40  sb          $v0, -0x75C0($at)
    ctx->pc = 0x1817f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A40u, _value); } while (0);
    // 0x1817fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181800: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x181800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368A40u));
    // 0x181804: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x181804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x181808: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18180c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x18180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x181810: 0xa0228a40  sb          $v0, -0x75C0($at)
    ctx->pc = 0x181810u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368A40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368A40u, _value); } while (0);
    // 0x181814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181818: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x181818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368A40u));
    // 0x18181c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x181820: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x181824: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x181828: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x181828u;
    SET_GPR_U32(ctx, 31, 0x181830u);
    ctx->pc = 0x18182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181828u;
    // 0x18182c: 0xa0228a40  sb          $v0, -0x75C0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181828u, 0x181830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181834: 0xa382868c  sb          $v0, -0x7974($gp)
    ctx->pc = 0x181834u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936204), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x181838u;
}
