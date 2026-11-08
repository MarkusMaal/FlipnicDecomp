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

// Function: entry_00147494
// Address: 0x147494 - 0x1477a4
void entry_00147494_0x147494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147494_0x147494");
#endif

    ctx->pc = 0x147494u;

label_147494:
    // 0x147494: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147498: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x147498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x14749c: 0x2e641380  sltiu       $a0, $s3, 0x1380
    ctx->pc = 0x14749cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4992) ? 1 : 0);
    // 0x1474a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1474a4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1474a8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1474ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1474b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1474b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1474b4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1474b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1474bc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1474c0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1474c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1474c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1474c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1474cc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1474d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1474d4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1474d8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1474dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1474e0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1474e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1474e4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1474e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1474ec: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1474f0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1474f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1474f8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1474f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1474fc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147500: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147504: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147508: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14750c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147510: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x147510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x147514: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147518: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14751c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147520: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147524: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147528: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x147528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x14752c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147530: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147534: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147538: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14753c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147540: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x147540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x147544: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147548: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14754c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147550: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147554: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147558: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x147558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x14755c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147560: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147564: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147568: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14756c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147570: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x147570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x147574: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147578: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14757c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147580: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147584: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147588: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x147588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x14758c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147590: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147594: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147598: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14759c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1475a0: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1475a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1475a4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1475a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1475ac: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1475b0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1475b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1475b8: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1475b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1475bc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1475c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1475c4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1475c8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1475cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1475d0: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x1475d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1475d4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1475d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1475dc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1475e0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1475e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1475e8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x1475e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x1475ec: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1475f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1475f4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1475f8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1475fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147600: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x147600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x147604: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147608: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14760c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147610: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147614: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147618: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x147618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x14761c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14761cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147620: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147624: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147628: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14762c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147630: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x147630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x147634: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147638: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14763c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147640: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147644: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147648: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x147648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x14764c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147650: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147654: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147658: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14765c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147660: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x147660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x147664: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147668: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14766c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147670: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147674: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147678: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x147678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    // 0x14767c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147680: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147684: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147688: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14768c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147690: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x147690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x147694: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147698: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14769c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1476a0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1476a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1476a8: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x1476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x1476ac: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1476b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1476b4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1476b8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1476bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1476c0: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x1476c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x1476c4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1476c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1476cc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1476d0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1476d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1476d8: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x1476d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
    // 0x1476dc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1476e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1476e4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1476e8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1476ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1476f0: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x1476f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x1476f4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1476f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1476fc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147700: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147704: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147708: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x147708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x14770c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147710: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147714: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147718: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14771c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147720: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x147720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x147724: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147728: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14772c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147730: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147734: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147738: 0xaca2006c  sw          $v0, 0x6C($a1)
    ctx->pc = 0x147738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 2));
    // 0x14773c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147740: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147744: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147748: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14774c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147750: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x147750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x147754: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147758: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14775c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147760: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147764: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147768: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x147768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x14776c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147770: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147774: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147778: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x14777c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14777cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147780: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x147780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x147784: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147788: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14778c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x147790: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x147794: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147798: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x147798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
    // 0x14779c: 0x1480ff3d  bnez        $a0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x14779Cu;
    {
        const bool branch_taken_0x14779c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1477A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14779Cu;
        // 0x1477a0: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14779c) {
            ctx->pc = 0x147494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147494;
        }
    }
    ctx->pc = 0x1477A4u;
}
